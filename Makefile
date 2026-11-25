all: main

main: main.c
	gcc -Wall -Wextra main.c -lm -o main

clean:
	rm -f main
