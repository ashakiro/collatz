CC=g++
CFLAGS=-c -Wall
LDFLAGS=
SOURCES= collatz.cpp testcollatz.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=collatz

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@
