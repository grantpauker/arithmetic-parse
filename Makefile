.PHONY: clean
CC=g++
CXXFLAGS= -std=c++17

all: *.o
	$(CC) $(CXXFLAGS) *.cpp
%.o: %.cpp
	$(CC) $(CXXFLAGS) -c $^

debug: CXXFLAGS += -g
debug: all

clean: 
	-rm *.o
	-rm *.gch
	-rm a.out 
