convert: compile link 

compile: lower.c upper.c main.c
	gcc -Wall -Werror -Wextra -fPIC -c lower.c upper.c
	gcc -shared -o libconvert.so *.o
	cp ./libconvert.so /usr/lib/
	chmod 0755 /usr/lib/libconvert.so
	ldconfig
	
link:
	gcc main.c -l convert -Wall -o main

clean:
	rm -rf *.o *.a main /usr/lib/libconvert.so libconvert.so