CC		= gcc
CFLAGS	= -g
RM 		= rm -f

default: all

all: pointerArithmetric

pointerArithmetric: pointerArithmetric.c
	$(CC) $(CFLAGS) -o pointerArithmetric pointerArithmetric.c

clean veryclean:
	$(RM) pointerArithmetric