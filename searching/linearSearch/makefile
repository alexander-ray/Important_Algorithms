OBJS = LinearSearch.o main.o
CXX = g++
CXXFLAGS = -Wall -std=c++11

all: LinearSearch

LinearSearch: $(OBJS)
	$(CXX) $(OBJS) -o LinearSearch

LinearSearch.o: LinearSearch.cpp LinearSearch.h
	$(CXX) $(CXXFLAGS) -c linearSearch.cpp

main.o: main.cpp LinearSearch.h
	$(CXX) $(CXXFLAGS) -c main.cpp

clean:
	rm *o LinearSearch
