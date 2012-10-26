BUILD = ./build
TEST = ./test
LIB = ./lib
SRC = ./src

all: $(BUILD)/main $(TEST)/test

$(BUILD)/main: $(SRC)/ATwoDArray/ATwoDArray.cpp
	cd $(SRC); $(MAKE) all

$(TEST)/test: $(TEST)/twodarray_test.cpp $(SRC)/ATwoDArray.o
	cd $(TEST); $(MAKE) test

clean:
	cd $(SRC); $(MAKE) clean
	cd $(TEST); $(MAKE) clean
