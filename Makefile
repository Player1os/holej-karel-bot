# variables
CC=gcc
CFLAGS=-std=c11 -Wall -Werror
LDLIBS=libkarel64-lin.a -lcurses
OUTPUT=$@

# if not running, try to use libkarel64-lin.a

# targets
%: %.c
	$(CC) $(CFLAGS) $@.c $(LDLIBS) -o $(OUTPUT)


