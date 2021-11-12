CPU:=$(shell uname -m)
TARGET:=$(shell basename `pwd`).$(CPU)
SOURCES:=$(wildcard *.cpp)
OBJECTS:=$(patsubst %.cpp,%.o,$(SOURCES))

CFLAGS+= -Wall -O2 -fconcepts-ts
LFLAGS+=

CC=g++
RM=rm -f

.PHONY: all clean rebuild

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) -o $@ $(OBJECTS) $(LFLAGS)

clean:
	$(RM) $(OBJECTS)
	$(RM) $(TARGET)

rebuild: clean all

