gcc main_sum.c -o main -w func.h
CC=gcc
CFLAGS=-g
RM=rm -f

default: all

all: Sum

Sum: main_sum.c
	$(CC) $(CFLAGS) -o Sum main_sum.c

clean veryclean:
	$(RM) Sum 
