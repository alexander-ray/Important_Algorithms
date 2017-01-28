
OBJS = BinarySearch.o main.o
CXX = g++
CXXFLAGS = -Wall -std=c++11

all: BinarySearch

BinarySearch: $(OBJS)
	$(CXX) $(OBJS) -o BinarySearch

BinarySearch.o: BinarySearch.cpp BinarySearch.h
	$(CXX) $(CXXFLAGS) -c BinarySearch.cpp

main.o: main.cpp BinarySearch.h
	$(CXX) $(CXXFLAGS) -c main.cpp

clean:
	rm *o BinarySearch
