CC		= gcc
CFLAGS	= -g
RM 		= rm -f

default: all

all: pointer2pointer

pointer2pointer: pointer2pointer.c
	$(CC) $(CFLAGS) -o pointer2pointer pointer2pointer.c

clean veryclean:
	$(RM) pointer2pointer