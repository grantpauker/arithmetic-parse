.PHONY: clean
CC=g++
CXXFLAGS= -std=c++17
SRCDIR=src
OBJDIR=obj
SRCFILES:=$(wildcard $(SRCDIR)/*.cpp)
OBJFILES:=$(patsubst $(SRCDIR)/%.cpp,$(OBJDIR)/%.o, $(SRCFILES))
all: $(OBJFILES)
	$(CC) $(CXXFLAGS) *.cpp  $(SRCFILES)
	

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	$(CC) $(CXXFLAGS) -c $^ -o $@

debug: CXXFLAGS += -g
debug: all 
test:
	@echo $(SRCFILES)

clean: 
	-rm -f $(OBJDIR)/*.o
	-rm -f a.out 
