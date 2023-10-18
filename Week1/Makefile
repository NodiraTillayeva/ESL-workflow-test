CC = gcc
CFLAGS = -Wall -O2

all: testing

testing: vector.o main.o
	$(CC) $(CFLAGS) -o testing vector.o main.o

vector3d.o: vector.c vector.h
	$(CC) $(CFLAGS) -c vector.c

main.o: main.c vector.h
	$(CC) $(CFLAGS) -c main.c

clean:
	rm -f *.o testing
