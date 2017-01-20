OBJS = InsertionSort.o main.o
CXX = g++
CXXFLAGS = -Wall -std=c++11

all: InsertionSort

InsertionSort: $(OBJS)
	$(CXX) $(OBJS) -o InsertionSort

InsertionSort.o: InsertionSort.cpp InsertionSort.h
	$(CXX) $(CXXFLAGS) -c insertionSort.cpp

main.o: main.cpp InsertionSort.h
	$(CXX) $(CXXFLAGS) -c main.cpp

clean:
	rm *o InsertionSort

