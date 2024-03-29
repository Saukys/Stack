test.exe : main.c stack.h stack.o
	gcc -std=c99 -o test.exe main.c stack.o

stack.o : stack.c stack.h
	gcc -c -std=c99 stack.c