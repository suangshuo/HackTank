CC = g++
OBJ_DIR=obj
BIN_DIR=bin
SRC_DIR=src
CFLAGS = -lncurses -O3

$(OBJ_DIR)/%.o:$(SRC_DIR)/%.cpp
	$(CC) -o $@ $< -c
$(BIN_DIR)/HackTank:$(OBJ_DIR)/%.o
	$(CC) -o $@ $< $(CFLAGS)

.PHONY:
	run init clean

run:
	$(BIN_DIR)/HackTank
init:
	mkdir obj bin
clean:
	rm -rf obj bin
