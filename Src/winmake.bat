setlocal
gcc -c a51.c 
gcc -c emitter.c
bison -d -v -o parser.c parser.y
gcc -c parser.c
gcc -c lexer.c
gcc -c pathtools.c
gcc -c run.c
gcc -c symbol.c
gcc -c pdex.c
gcc -o a51 a51.o emitter.o lexer.o parser.o pathtools.o run.o symbol.o
gcc -o pdex pdex.o
