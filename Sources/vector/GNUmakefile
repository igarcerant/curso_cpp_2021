CPU:=$(shell uname -m)
TARGET:=$(shell basename `pwd`).$(CPU)
SOURCES:=$(wildcard *.c)
OBJECTS:=$(patsubst %.c,%.o,$(SOURCES))

CFLAGS+= -Wall -O2
LFLAGS+=

CC=gcc
RM=rm -f

.PHONY: all clean rebuild

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) -o $@ $(OBJECTS) $(LFLAGS)

clean:
	$(RM) $(OBJECTS)
	$(RM) $(TARGET)

rebuild: clean all

