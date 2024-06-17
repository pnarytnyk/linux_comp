calc: compile link 

compile: add.c divv.c fac.c main.c mul.c sqt.c sub.c
	gcc -Wall -Werror -Wextra -lm -c add.c divv.c fac.c mul.c sqt.c sub.c
	ar -rcs libcalc.a add.o divv.o fac.o mul.o sqt.o sub.o

link:
	gcc main.c -lm -L . -l calc -o main

clean:
	rm -rf *.o *.a main