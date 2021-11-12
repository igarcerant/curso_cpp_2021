CPU:=$(shell uname -m)
TARGET:=lib$(shell basename `pwd`).a
SOURCES:=$(wildcard *.cpp)
OBJECTS:=$(patsubst %.cpp,%.o,$(SOURCES))

CFLAGS+= -Wall -O2
LFLAGS+=

AR=ar q
CC=g++
RM=rm -f

.PHONY: all clean rebuild

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(RM) $(TARGET)
	$(AR) $(TARGET) $(OBJECTS)

clean:
	$(RM) $(OBJECTS)
	$(RM) $(TARGET)

rebuild: clean all

