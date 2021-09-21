CXX = g++
CXXFLAGS	= -std=c++17 -Wall

all: test

clean:
	rm *.0

test: Player.o Maze.o main.cpp
	$(CXX) $(CXXFLAGS) functions_to_implement.cpp example.cpp -o test
