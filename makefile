CC=gcc     
OBJ=$(patsubst %.c, %.o,$(SRC_PATH)) 
SRC_PATH=$(notdir $(wildcard ./src/*.c))
INC_DIR=./inc
OBJ_DIR=./obj


all:$(OBJ)
	$(CC) -o leetcode  obj/*.o

%.o:src/%.c
	mkdir -p obj/
	$(CC) -c $^ -I ${INC_DIR} -o obj/$@ 

.PHONY:clean

clean:
	rm -rf obj/
