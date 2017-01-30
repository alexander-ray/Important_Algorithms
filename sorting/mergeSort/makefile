OBJS = MergeSort.o main.o
CXX = g++
CXXFLAGS = -Wall -std=c++11

all: MergeSort

MergeSort: $(OBJS)
	$(CXX) $(OBJS) -o MergeSort

MergeSort.o: MergeSort.cpp MergeSort.h
	$(CXX) $(CXXFLAGS) -c mergeSort.cpp

main.o: main.cpp MergeSort.h
	$(CXX) $(CXXFLAGS) -c main.cpp

clean:
	rm *o MergeSort

