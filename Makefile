CXX = g++
CXXFLAGS	= -std=c++17 -Wall

all: test

clean:
	rm *.o

test: functions_to_implement.o main.cpp
	$(CXX) $(CXXFLAGS) functions_to_implement.cpp example.cpp -o test
