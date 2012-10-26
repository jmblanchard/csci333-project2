BUILD = ./build
TEST = ./test
LIB = ./lib
SRC = ./src

all: $(BUILD)/main

$(BUILD)/main: $(SRC)/ATwoDArray/ATwoDArray.cpp
	cd $(SRC); $(MAKE) all

clean:
	cd $(SRC); $(MAKE) clean
