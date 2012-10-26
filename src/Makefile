CPP = g++
CPPFLAGS = -Wall -Wextra -Werror -pedantic

all: ATwoDArray.o

ATwoDArray.o: ATwoDArray/ATwoDArray.h ATwoDArray/ATwoDArray.cpp
	$(CPP) $(CPPFLAGS) -c ATwoDArray/ATwoDArray.cpp

clean:
	rm -f ATwoDArray/*.o
	rm -f *.o
