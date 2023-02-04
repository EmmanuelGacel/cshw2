
CC      = gcc
TARGET  = gcd
C_FILES = $(filter-out $(TARGET).c, $(wildcard *.c))
OBJECTS = $(patsubst %.c,%.o,$(C_FILES))
CFLAGS  = -g -Wall -Werror -pedantic-errors

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJECTS) $(TARGET).c
	$(CC) $(OBJECTS) $(TARGET).c -o $(TARGET)

%.o: %.c %.h
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJECTS) $(TARGET) $(TARGET).exe

