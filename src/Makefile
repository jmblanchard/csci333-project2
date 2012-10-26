CPP = g++
CPPFLAGS = -Wall -Wextra -Werror -pedantic

all: ATwoDArray.o VTwoDArray.o

ATwoDArray.o: ATwoDArray/ATwoDArray.h ATwoDArray/ATwoDArray.cpp
	$(CPP) $(CPPFLAGS) -c ATwoDArray/ATwoDArray.cpp

VTwoDArray.o: VTwoDArray/VTwoDArray.h VTwoDArray/VTwoDArray.cpp
	$(CPP) $(CPPFLAGS) -c VTwoDArray/VTwoDArray.cpp

clean:
	rm -f *.o
