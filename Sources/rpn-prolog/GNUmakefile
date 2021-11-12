CPU:=$(shell uname -m)
TARGET:=$(shell basename `pwd`).$(CPU)
SOURCES:=$(wildcard *.pl)
OBJECTS:=$(patsubst %.pl,%.o,$(SOURCES))

.SUFFIXES: .pl .o .$(CPU)

.PHONY: all clean rebuild

GPLC:=gplc
RM:=rm -f

CFLAGS+=
LFLAGS+=

%.o: %.pl
	$(GPLC) $(CFLAGS) -c $< -o $@

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(GPLC) -o $@ $(OBJECTS) $(LFLAGS)

clean:
	$(RM) $(OBJECTS)
	$(RM) $(TARGET)

rebuild: clean all


