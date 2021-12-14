# Standard make file
CC	= g++
SOURCES = day1
CXXFLAGS = -Wall -pedantic -Wextra -std=c++11 -g
INFLAGS = -I./include
LDFLAGS = -L./
LDLIBS =

.PHONY: all
all: $(SOURCES).o
	$(CC) $(CXXFLAGS) $(INFLAGS) $(LDFLAGS) $(SOURCES).o $(LDLIBS) -o $(SOURCES).exe

# Object files
$(SOURCES).o: $(SOURCES).cpp
	$(CC) -c $(CXXFLAGS) $(INFLAGS) $(LDFLAGS) $(LDLIBS) $< -o $@  

# clean by removing object files and executable.
.PHONY: clean
clean:
	rm	$(EXE) $(SOURCES).o $(SOURCES).exe

