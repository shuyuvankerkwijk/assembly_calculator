Connect to Altera DE0-CV Board

Put board in boot modeL
1. Hold down KEY0
2. While holding down KEY0, press FPGA_RESET
3. Release KEY0

In terminal:

1. `ls -l /dev/ | grep "usb"`
2. `./pdex -p/dev/cu.usbserial-D30HKNV8 calculator_v1.hex` (replace D30HKNV8 with the port found in step 1)
