# makefile for token

testtoken : c-exercise3.o token.o
	gcc c-exercise3.o token.o -o c-exercise3

c-exercise3.o : c-exercise3.c 
	gcc -c c-exercise3.c

token.o : token.c token.h
	gcc -c token.c 

clean:
	rm *.o 