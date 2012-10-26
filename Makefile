BUILD = ./build
TEST = ./test
LIB = ./lib
SRC = ./src

all: $(BUILD)/main $(TEST)/test

$(BUILD)/main: $(SRC)/ATwoDArray/ATwoDArray.cpp $(SRC)/VTwoDArray/VTwoDArray.cpp $(SRC)/STwoDArray/STwoDArray.cpp
	cd $(SRC); $(MAKE) all

$(TEST)/test: $(TEST)/twodarray_test.cpp $(SRC)/ATwoDArray.o $(SRC)/VTwoDArray.o $(SRC)/STwoDArray.o
	cd $(TEST); $(MAKE) test

clean:
	cd $(SRC); $(MAKE) clean
	cd $(TEST); $(MAKE) clean
