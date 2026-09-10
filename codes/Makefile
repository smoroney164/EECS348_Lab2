CC=g++
CFLAGS= -c -Wall

all: prog

prog: main.o isEven.o isOdd.o
	$(CC) main.o isEven.o isOdd.o -o prog
main.o: main.c
	$(CC) $(CFLAGS) main.c
factorial.o: isEven.c
	$(CC) $(CFLAGS) isEven.c
hello.o: isOdd.c
	$(CC) $(CFLAGS) isOdd.c
clean:
	rm -rf *.o prog