CPP = g++
CPPFLAGS = -Wall -Wextra -Werror -pedantic

all: ATwoDArray.o VTwoDArray.o Node.o STwoDArray.o

ATwoDArray.o: ATwoDArray/ATwoDArray.h ATwoDArray/ATwoDArray.cpp
	$(CPP) $(CPPFLAGS) -c ATwoDArray/ATwoDArray.cpp

VTwoDArray.o: VTwoDArray/VTwoDArray.h VTwoDArray/VTwoDArray.cpp
	$(CPP) $(CPPFLAGS) -c VTwoDArray/VTwoDArray.cpp

Node.o: STwoDArray/Node.h STwoDArray/Node.cpp
	$(CPP) $(CPPFLAGS) -c STwoDArray/Node.cpp

STwoDArray.o: STwoDArray/STwoDArray.h STwoDArray/STwoDArray.cpp Node.o
	$(CPP) $(CPPFLAGS) -c STwoDArray/STwoDArray.cpp Node.o

clean:
	rm -f *.o
