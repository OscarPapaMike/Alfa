CC=gcc
CFLAGS=-Wall -g
INPUT=t02b.c
OUTPUT=quebec

q:
	gcc -Wall -g t02b.c -o 

build:
	$(CC) $(CFLAGS) $(INPUT) -o $(OUTPUT)

clean:
	rm -f $(OUTPUT)

rebuild: clean build

full: clean build
	./$(OUTPUT)