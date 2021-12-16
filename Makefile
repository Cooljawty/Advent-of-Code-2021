# Standard make file
CC	= g++
SOURCES = day1 day2
CXXFLAGS = -Wall -pedantic -Wextra -std=c++11 -g
INFLAGS = -I./include
LDFLAGS = -L./
LDLIBS =

.PHONY: all
all: $(SOURCES)
#	$(CC) $(CXXFLAGS) $(INFLAGS) $(LDFLAGS) $<.o $(LDLIBS) -o $<.exe

# Object files
#$(SOURCES).o: $(SOURCES).cpp
#	$(CC) -c $(CXXFLAGS) $(INFLAGS) $(LDFLAGS) $(LDLIBS) $< -o $<.o  

$(SOURCES): %: %.cpp
	$(CC) $(CXXFLAGS) $(INFLAGS) $(LDFLAGS) -o $@ $<

# clean by removing object files and executable.
.PHONY: clean
clean:
	rm	$(EXE) $(SOURCES).o $(SOURCES).exe

