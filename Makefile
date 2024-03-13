CC = g++
OBJ_DIR=obj
BIN_DIR=bin
SRC_DIR=src
CFLAGS = -lncurses -O3
OBJS = $(patsubst %.cpp,%.o,$(wildcard $(SRC_DIR)/*.cpp) $(wildcard $(SRC_DIR)/StartMenu/*.cpp))

$(BIN_DIR)/HackTank:$(OBJS)
	$(CC) -o $@ $(OBJS) $(CFLAGS)

.PHONY:
	run init clean

run:
	$(BIN_DIR)/HackTank
init:
	mkdir obj bin
clean:
	rm -rf obj bin
