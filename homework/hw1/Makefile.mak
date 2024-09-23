CC		= gcc
CFLAGS	= -g
RM 		= rm -f
BUILD_DIR	= ./build
HEADER_DIR	= ./header
SRC_DIR	= ./src
OBJ_DIR	= ./obj

default: all

all: build homework1

build:
	mkdir -p $(BUILD_DIR)

homework1: homework1.c
	$(CC) $(CFLAGS) -o $(BUILD_DIR)/homework1 homework1.c

clean veryclean:
	$(RM) $(BUILD_DIR)/homework1