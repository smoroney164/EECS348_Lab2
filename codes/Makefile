CC=g++ #creates variable CC for gcc compiling
CFLAGS= -c -Wall #stores options to pass to the c compiler. -c is for compiling into an object and -wall is for compiler warnings

all: prog #running make builds the program

prog: main.o isEven.o isOdd.o #states that prog is dependent on main.o, isEven.o, and isOdd.o. Creates executable program
	$(CC) main.o isEven.o isOdd.o -o prog
#compiles main.o, isEven.o, and isOdd.o

main.o: main.c #shows main.o is dependent on main.c and creates main object
	$(CC) $(CFLAGS) main.c
#compiles main.c and checks for common compiler warnings

isEven.o: isEven.c #shows isEven.o is dependent on isEven.c and creates main object
	$(CC) $(CFLAGS) isEven.c
#compiles isEven.c and checks for common compiler warnings

isOdd.o: isOdd.c #shows isOdd.o is dependent on isOdd.c and creates main object
	$(CC) $(CFLAGS) isOdd.c
#compiles isOdd.c and checks for common compiler warnings

clean:
	rm -f *.o prog
#deletes object files and executable files, but leaves source code untouched