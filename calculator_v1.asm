$MODDE0CV

	CSEG at 0
	ljmp main_code

	DSEG at 30H
bcd:	ds 5 ; 40 bits / 10 BCD digits (4 bits each)
x: ds 4 ; num1, max size is 32 bits
y: ds 4 ; num2, max size is 32 bits
S: ds 4 ; for sqrt32
entered_count: ds 1 ; number of digits entered so far

	bseg ; standard address 0x20h to 0x2F
mf: dbit 1  ; TODO
operationSetFlag: dbit 1 ; if operation key pressed
errorFlag: dbit 1  ; if error occurred
completeFlag: dbit 1 ; if calculation is complete
$include(math32.asm)

	CSEG

; Look-up table for 7-seg displays
myLUT:
    DB 0xC0, 0xF9, 0xA4, 0xB0, 0x99        ; 0 TO 4
    DB 0x92, 0x82, 0xF8, 0x80, 0x90        ; 4 TO 9
    DB 0x88, 0x83, 0xC6, 0xA1, 0x86, 0x8E  ; A to F

showBCD MAC
	; Display LSD
    mov A, %0
    anl a, #0fh
    movc A, @A+dptr
    mov %1, A
	; Display MSD
    mov A, %0
    swap a
    anl a, #0fh
    movc A, @A+dptr
    mov %2, A
ENDMAC

; set errorFlag and display 'Error' on 7-seg displays
setError:
	setb errorFlag
	mov  HEX5, #0xFF ; all off
    mov  HEX4, #0x86 ; 'E'
    mov  HEX3, #0xCE ; 'r' 
    mov  HEX2, #0xCE ; 'r' 
    mov  HEX1, #0xC0 ; 'O' 
    mov  HEX0, #0xCE ; 'r'

; error loop forever
errorLoopForever:
	ret

; shows the 10-digit BCD number on the six 7-seg displays
Display:
	mov dptr, #myLUT
	
	$MESSAGE TIP: If digits 10, 9, 8, and 7 are not zero, LEDR7: on
	
	mov a, bcd+3
	orl a, bcd+4
	jz Display_L1
	setb LEDRA.7 ; Non-zero digits alert
	sjmp Display_L2
Display_L1:
	clr LEDRA.7
Display_L2:

	$MESSAGE TIP: Pressing KEY3, displays the most significant digits of the 10-digit number
	
	jnb key.3, Display_high_digits
	showBCD(bcd+0, HEX0, HEX1)
	showBCD(bcd+1, HEX2, HEX3)
	showBCD(bcd+2, HEX4, HEX5)
	sjmp Display_end

Display_high_digits:
	showBCD(bcd+3, HEX0, HEX1)
	showBCD(bcd+4, HEX2, HEX3)
	mov HEX4, #0xff	
	mov HEX5, #0xff	
	
Display_end:
    ret

; rotates a bit left through carry
MYRLC MAC
	mov a, %0
	rlc a
	mov %0, a
ENDMAC

; shifts bcd left by one digit
Shift_Digits_Left:
	mov R0, #4 ; shift left four bits
Shift_Digits_Left_L0:
	clr c
	MYRLC(bcd+0)
	MYRLC(bcd+1)
	MYRLC(bcd+2)
	MYRLC(bcd+3)
	MYRLC(bcd+4)
	djnz R0, Shift_Digits_Left_L0
	; R7 has the new bcd digit	
	mov a, R7
	orl a, bcd+0
	mov bcd+0, a
	ret
	
; rotates a bit right through carry
MYRRC MAC
	mov a, %0
	rrc a
	mov %0, a
ENDMAC

; shifts bcd right by one digit
Shift_Digits_Right:
	mov R0, #4 ; shift right four bits
Shift_Digits_Right_L0:
	clr c
	MYRRC(bcd+4)
	MYRRC(bcd+3)
	MYRRC(bcd+2)
	MYRRC(bcd+1)
	MYRRC(bcd+0)
	djnz R0, Shift_Digits_Right_L0
	ret

; waits for 50ms
Wait50ms:
;33.33MHz, 1 clk per cycle: 0.03us
	mov R0, #90
L3: mov R1, #74
L2: mov R2, #250
L1: djnz R2, L1 ;3*250*0.03us=22.5us
    djnz R1, L2 ;74*22.5us=1.665ms
    djnz R0, L3 ;1.665ms*30=50ms
    ret

; checks if a key is pressed in the column
CHECK_COLUMN MAC
	jb %0, CHECK_COL_%M
	mov R7, %1
	jnb %0, $ ; wait for key release
	setb c
	ret
CHECK_COL_%M:
ENDMAC

Configure_Keypad_Pins:
	; Configure the row pins as output and the column pins as inputs
	orl P1MOD, #0b_01010100 ; P1.6, P1.4, P1.2 output
	orl P2MOD, #0b_00000001 ; P2.0 output
	anl P2MOD, #0b_10101011 ; P2.6, P2.4, P2.2 input
	anl P3MOD, #0b_11111110 ; P3.0 input
	ret

; These are the pins used for the keypad in this program:
ROW1 EQU P1.2
ROW2 EQU P1.4
ROW3 EQU P1.6
ROw4 EQU P2.0
COL1 EQU P2.2
COL2 EQU P2.4
COL3 EQU P2.6
COL4 EQU P3.0

; This subroutine scans a 4x4 keypad.  If a key is pressed sets the carry
; to one and returns the key code in register R7.
; It works with both a default keypad or a modified keypad with the labels
; rotated 90 deg ccw.  The type of keypad is determined by SW0, which is bit SWA.0

; SIMPLE VERSION:
; set all rows low
; check all column inputs
; if all high, no key pressed
; if low, some key pressed in that column
; scan each row one at a time by setting low and checking columns
; if low, key at that row+column combination is pressed
Keypad:
	; First check the backspace/correction pushbutton.  We use KEY1 for this function.
	$MESSAGE TIP: KEY1 is the erase key
	jb KEY.1, keypad_L0
	lcall Wait50ms ; debounce
	jb KEY.1, keypad_L0
	jnb KEY.1, $ ; The key was pressed, wait for release
	lcall Shift_Digits_Right
	clr c
	ret
	
keypad_L0:
	; Make all the rows zero.  If any column is zero then a key is pressed.
	clr ROW1
	clr ROW2
	clr ROW3
	clr ROW4
	mov c, COL1
	anl c, COL2
	anl c, COL3
	anl c, COL4
	jnc Keypad_Debounce
	clr c
	ret
		
Keypad_Debounce:
	; A key maybe pressed.  Wait and check again to discard bounces.
	lcall Wait50ms ; debounce
	mov c, COL1
	anl c, COL2
	anl c, COL3
	anl c, COL4
	jnc Keypad_Key_Code
	clr c
	ret
	
Keypad_Key_Code:	
	; A key is pressed.  Find out which one by checking each possible column and row combination.

	setb ROW1
	setb ROW2
	setb ROW3
	setb ROW4
	
	$MESSAGE TIP: SW0 is used to control the layout of the keypad. SW0=0: unmodified keypad. SW0=1: keypad rotated 90 deg CCW

	jnb SWA.0, keypad_default
	ljmp keypad_90deg
	
	; This check section is for an un-modified keypad
keypad_default:	
	; Check row 1	
	clr ROW1
	CHECK_COLUMN(COL1, #01H)
	CHECK_COLUMN(COL2, #02H)
	CHECK_COLUMN(COL3, #03H)
	CHECK_COLUMN(COL4, #0AH)
	setb ROW1

	; Check row 2	
	clr ROW2
	CHECK_COLUMN(COL1, #04H)
	CHECK_COLUMN(COL2, #05H)
	CHECK_COLUMN(COL3, #06H)
	CHECK_COLUMN(COL4, #0BH)
	setb ROW2

	; Check row 3	
	clr ROW3
	CHECK_COLUMN(COL1, #07H)
	CHECK_COLUMN(COL2, #08H)
	CHECK_COLUMN(COL3, #09H)
	CHECK_COLUMN(COL4, #0CH)
	setb ROW3

	; Check row 4	
	clr ROW4
	CHECK_COLUMN(COL1, #0EH) ; E = *
	CHECK_COLUMN(COL2, #00H)
	CHECK_COLUMN(COL3, #0FH) ; F = #
	CHECK_COLUMN(COL4, #0DH)
	setb ROW4

	clr c
	ret
	
	; This check section is for a keypad with the labels rotated 90 deg ccw
keypad_90deg:
	; Check row 1	
	clr ROW1
	CHECK_COLUMN(COL1, #0AH)
	CHECK_COLUMN(COL2, #0BH)
	CHECK_COLUMN(COL3, #0CH)
	CHECK_COLUMN(COL4, #0DH)
	setb ROW1

	; Check row 2	
	clr ROW2
	CHECK_COLUMN(COL1, #03H)
	CHECK_COLUMN(COL2, #06H)
	CHECK_COLUMN(COL3, #09H)
	CHECK_COLUMN(COL4, #0FH)
	setb ROW2

	; Check row 3	
	clr ROW3
	CHECK_COLUMN(COL1, #02H)
	CHECK_COLUMN(COL2, #05H)
	CHECK_COLUMN(COL3, #08H)
	CHECK_COLUMN(COL4, #00H)
	setb ROW3

	; Check row 4	
	clr ROW4
	CHECK_COLUMN(COL1, #01H)
	CHECK_COLUMN(COL2, #04H)
	CHECK_COLUMN(COL3, #07H)
	CHECK_COLUMN(COL4, #0EH)
	setb ROW4

	clr c
	ret

; checks if operation key pressed, if so, set display to all zeroes
check_add_pressed:
	cjne R7, #0AH, check_sub_pressed ; "A" key for + operation
	mov b, #0 ; b = 0 for addition
	setb operationSetFlag
	ljmp copy_value_to_x_and_zero_displays

check_sub_pressed:
	cjne R7, #0BH, check_root_pressed ; "B" key for - operation
	mov b, #1 ; b = 1 for subtraction
	setb operationSetFlag
	ljmp copy_value_to_x_and_zero_displays 

check_root_pressed:
	cjne R7, #0CH, check_div_pressed ; "C" key for root operation
	mov b, #2 ; b = 2 for root
	setb operationSetFlag
	ljmp copy_value_to_x_and_zero_displays 

check_div_pressed:
	cjne R7, #0DH, check_mul_pressed ; "D" key for division
	mov b, #3 ; b = 3 for division
	setb operationSetFlag
	ljmp copy_value_to_x_and_zero_displays ; 

check_mul_pressed:
	cjne R7, #0EH, check_enter_pressed ; "*" key for multiplication
	mov b, #4 ; b = 4 for multiplication
	setb operationSetFlag
	ljmp copy_value_to_x_and_zero_displays 

check_enter_pressed:
	cjne R7, #0FH, back_to_forever ; "#" key for = operation
	jnb operationSetFlag, back_to_forever ; if no operation set, ignore
	clr operationSetFlag
	mov a, b ; move operation value (set above) into a
	lcall check_add_operation ; start performing operations!

back_to_forever:
	ljmp forever

copy_value_to_x_and_zero_displays:
	lcall bcd2hex ; converts 10 digits in bcd to 32 bits in x
	jb mf, handle_overflow ; if carry bit set, overflow error
	lcall copy_xy ; copies x to y
	Load_X(0) ; sets x to 0
	lcall hex2bcd ; sets bcd to 0
	lcall Display ; displays all zeroes
	ljmp forever ; back to forever

check_add_operation:
	cjne a, #0, check_sub_operation
	lcall bcd2hex ; load num2 into x
	jb mf, handle_overflow
	lcall add32 ; x = x + y
	jb mf, handle_overflow ; overflow error
	ljmp display_positive_x

check_sub_operation:
	cjne a, #1, check_root_operation
	lcall bcd2hex ; load num2 into x
	jb mf, handle_overflow
	lcall xchg_xy ; swap x and y, since y was first num, x is second num
	lcall sub32 ; x = x - y
	mov a, x+3 ; if bit 7 = 1 (sign bit) display negative
	jb ACC.7, display_negative_x
	ljmp display_positive_x

check_root_operation:
	cjne a, #2, check_div_operation
	lcall xchg_xy ; swap x and y, since y was first num, x is second num
	lcall sqrt32  ; perform integer sqrt (defined at bottom)
	ljmp display_positive_x

check_div_operation:
	cjne a, #3, check_mul_operation
	lcall bcd2hex ; load num2 into x
	jb mf, handle_overflow

	mov a, x+0
	orl a, x+1 
	orl a, x+2
	orl a, x+3
	jz handle_div_by_zero ; if all bits of x are zero, error
	
	lcall xchg_xy ; swap x and y, since y was first num, x is second num 
	lcall div32 ; x = x / y
	ljmp display_positive_x

check_mul_operation:
	cjne a, #4, back_to_forever
	lcall bcd2hex ; load num2 into x
	jb mf, handle_overflow
	lcall mul32 ; x = x * y
	jb mf, handle_overflow ; if carry bit set, overflow error
	ljmp display_positive_x

handle_overflow:
	; set error flag and display 'E' on all 7-seg displays
	lcall setError
	ljmp errorLoopForever

handle_div_by_zero: 
	; set error flag and display 'E' on all 7-seg displays
	lcall setError
	ljmp errorLoopForever

display_positive_x:
	setb completeFlag
	clr LEDRA.0 
	lcall hex2bcd
	lcall Display
	ljmp forever

display_negative_x:
	setb completeFlag
	setb LEDRA.0
	lcall twos_complement_x
	lcall hex2bcd
	lcall Display
	ljmp forever

twos_complement_x:
	; complement each bit
	mov a, x+0
	cpl a 
	mov x+0, a
	mov a, x+1
	cpl a
	mov x+1, a
	mov a, x+2
	cpl a
	mov x+2, a
	mov a, x+3
	cpl a
	mov x+3, a

	; add 1 and carry through
	mov a, #1
	add a, x+0
	mov x+0, a
	mov a, #0
	addc a, x+1
	mov x+1, a
	mov a, #0
	addc a, x+2
	mov x+2, a
	mov a, #0
	addc a, x+3
	mov x+3, a
	ret
	
main_code:
	mov SP, #7FH
	clr a
	mov LEDRA, a
	mov LEDRB, a
	mov bcd+0, a
	mov bcd+1, a
	mov bcd+2, a
	mov bcd+3, a
	mov bcd+4, a
	mov entered_count, a
	clr completeFlag
	clr errorFlag
	lcall Configure_Keypad_Pins

forever:
	lcall Keypad
	jb errorFlag, skip_display
	lcall Display

skip_display:
	jnc forever

	; If errorFlag is set, only allow digits 0–9
	jb errorFlag, error_digit_check
	mov a, #9
	clr c
	subb a, R7
	jc operation_entered ; if R7 > 9 (not 0-9) call operation

	; check if we didn't just have calculation completed
	jnb completeFlag, digit_entered 

	; if calculation is complete and new digit entered, erase calculation and enter digit
	Load_X(0)
	lcall hex2bcd ; set bcd to 0
	clr LEDRA.0 ; turn off negative LED
	clr completeFlag ; clear complete flag
	mov entered_count, #0 ; reset number of digits entered
	lcall digit_entered ; process new digit

error_digit_check:
	mov a, #9
	clr c
	subb a, R7
	jc forever ; ignore operation keys if in error state

	clr errorFlag
	clr LEDRA.0
	clr completeFlag
	mov entered_count, #1

	Load_X(0)
	; lcall hex2bcd
	lcall Shift_Digits_Left
	mov a, R7
	orl a, bcd+0
	mov bcd+0, a

	ljmp forever

operation_entered:
	mov entered_count, #0 ; reset number of digits entered
	lcall check_add_pressed
	ljmp forever

digit_entered:
	inc entered_count ; increment number of digits entered
	mov a, entered_count
	cjne a, #11, digits_entered_continue
	ljmp handle_overflow ; if more than 10 digits entered, overflow error

digits_entered_continue:
	; shift digits left
	lcall Shift_Digits_Left
	ljmp forever

;------------------------------------------------
; sqrt32:
;   Calculates integer sqrt(x) using Heron's method
;------------------------------------------------
sqrt32:
    push acc
    push psw
    push ar0
    push ar1
    push ar2
    push ar3
    push ar4

    ; if x==0 done
    mov   a, x+0
    orl   a, x+1
    orl   a, x+2
    orl   a, x+3
    jnz   not_zero
    sjmp  sqrt32_done

not_zero:
    ; if x==1 done
    mov  A, x+0
	cjne A, #1, skip_check_one
    mov   a, x+1
    orl   a, x+2
    orl   a, x+3
    jnz   skip_check_one
    sjmp  sqrt32_done

skip_check_one:
    ; save original input x into S
    mov   S+0, x+0
    mov   S+1, x+1
    mov   S+2, x+2
    mov   S+3, x+3

    ; for initial guess shift x right by 1
    mov   a, x+3
    rrc   a
    mov   x+3, a
    mov   a, x+2
    rrc   a
    mov   x+2, a
    mov   a, x+1
    rrc   a
    mov   x+1, a
    mov   a, x+0
    rrc   a
    mov   x+0, a

    ; 20 iterations
    mov   r0, #20   ; iteration count

sqrt32_loop:
    ; y = guess
    lcall copy_xy  ; (y = x)

    ; x = S
    mov   x+0, S+0
    mov   x+1, S+1
    mov   x+2, S+2
    mov   x+3, S+3

    ; x = x / y => x = S / guess
    lcall div32

    ; x = x + guess => (S / guess) + guess
    lcall add32

    ; x = x / 2
    Load_y(2)
    lcall div32

    djnz  r0, sqrt32_loop

sqrt32_done:
    pop   ar4
    pop   ar3
    pop   ar2
    pop   ar1
    pop   ar0
    pop   psw
    pop   acc
    ret
	
end
