.PHONY: clean
CC=g++
CXXFLAGS= -std=c++17
SRCDIR=src
OBJDIR=obj
SOURCES:=$(wildcard $(SRCDIR)/*.cpp)
OBJECTS:=$(patsubst $(SRCDIR)/%.cpp,$(OBJDIR)/%.o, $(SOURCES))

all: $(OBJECTS)
	$(CC) $(CXXFLAGS) *.cpp  $(SOURCES)

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	$(CC) $(CXXFLAGS) -c $^ -o $@

debug: CXXFLAGS += -g
debug: all 

clean: 
	-rm -f $(OBJDIR)/*.o
	-rm -f a.out 
