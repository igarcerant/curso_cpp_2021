CPU:=$(shell uname -m)
TARGET:=$(shell basename `pwd`).$(CPU)
SOURCES:=$(wildcard *.cpp)
OBJECTS:=$(patsubst %.cpp,%.o,$(SOURCES))

CC=g++
RM=rm -f

.PHONY: all clean rebuild

%.o: %.cpp
	$(CC) -c $< -o $@

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) -o $@ $(OBJECTS)

clean:
	$(RM) $(OBJECTS)
	$(RM) $(TARGET)

rebuild: clean all

