TEST = ../test
LIB = ../lib
SRC = ../src
GTEST = $(LIB)/gtest-1.6.0
GTEST_MAINA = $(LIB)/gtest_main.a
GTEST_INCLUDES = -I$(GTEST) -I$(GTEST)/include

CPP = g++
CPPFLAGS = -Wall -Wextra

test: twodarray_test.cpp $(SRC)/ATwoDArray.o $(GTEST_MAINA)
	$(CPP) $(CPPFLAGS) $(GTEST_INCLUDES) -pthread -o test twodarray_test.cpp $(SRC)/ATwoDArray.o $(GTEST_MAINA)

clean:
	rm -f test
