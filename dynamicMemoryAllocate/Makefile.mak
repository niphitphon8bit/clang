CC		= gcc
CFLAGS	= -g
RM 		= rm -f

default: all

all: dynamic01

dynamic01: dynamic01.c
	$(CC) $(CFLAGS) -o dynamic01 dynamic01.c

clean veryclean:
	$(RM) dynamic01