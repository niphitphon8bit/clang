CC		= gcc
CFLAGS	= -g
RM 		= rm -f

default: all

all: functionPointer

functionPointer: functionPointer.c
	$(CC) $(CFLAGS) -o functionPointer functionPointer.c

clean veryclean:
	$(RM) functionPointer