CC = g++
OBJ_DIR=obj
BIN_DIR=bin
SRC_DIR=src
CFLAGS = -lncurses -lpanel -lmenu -lform -O3
OBJS = $(wildcard $(SRC_DIR)/*.cpp) $(wildcard $(SRC_DIR)/Class/*.cpp) $(wildcard $(SRC_DIR)/StartMenu/*.cpp)

$(BIN_DIR)/HackTank:$(OBJS)
	$(CC) -o $@ $(OBJS) $(CFLAGS)

.PHONY:
	run init clean install

run:
	$(BIN_DIR)/HackTank
init:
	mkdir bin
clean:
	rm -rf bin
install:
	mv $(BIN_DIR)/HackTank /usr/bin
