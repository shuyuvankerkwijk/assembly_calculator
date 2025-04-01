OBJ= a51.o emitter.o lexer.o parser.o pathtools.o run.o symbol.o

# On Windows, gcc comes with the installation of Quartus, so change
# the path to use it in this makefile
ifeq ($(OS), Windows_NT)
	SHELL=cmd
#	export PATH=C:\Altera\16.1\quartus\bin64\cygwin\bin
endif

a51: $(OBJ) pdex.o
	gcc -o a51 $(OBJ)
	gcc -o pdex pdex.o

a51.o: a51.c a51.h
	gcc -c a51.c 

emitter.o: emitter.c a51.h
	gcc -c emitter.c

parser.c: parser.y a51.h
	bison -d -v -o parser.c parser.y

parser.o: parser.c a51.h
	gcc -c parser.c
	
lexer.o: lexer.c parser.o a51.h
	gcc -c lexer.c

pathtools.o: pathtools.c a51.h
	gcc -c pathtools.c

run.o: run.c a51.h
	gcc -c run.c

symbol.o: symbol.c a51.h
	gcc -c symbol.c

pdex.o: pdex.c
	gcc -c pdex.c

clean:
ifeq ($(OS), Windows_NT)
	del *.o *.output parser.c parser.h a51.exe pdex.exe
else
	rm -f *.o *.output parser.c parser.h a51 pdex
endif

check:
	@echo $(PATH)
