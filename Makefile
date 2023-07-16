CC=gcc
#CFLAGS=-Wall -g
CFLAGS=-Wall -O3

all: main

main: show.c show.h show.o main.c
	$(CC) $(CFLAGS) -o main main.c show.o

clean:
	rm -f main *.o
