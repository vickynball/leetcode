CC=gcc     
OBJ=$(patsubst %.c, %.o,$(SRC_PATH)) 
SRC_PATH=$(notdir $(wildcard ./src/*.c))
INC_DIR=./inc



all:$(OBJ)
	$(CC) -o leetcode  obj/*.o

%.o:src/%.c 
	$(CC) -c $^ -I ${INC_DIR} -o obj/$@ 

.PHONY:clean

clean:
	rm obj/*
