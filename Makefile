CXX = g++
CXXFLAGS	= -std=c++17 -Wall

all: test

clean:
	rm test

test: test.cpp
	$(CXX) $(CXXFLAGS) example.cpp -o test
