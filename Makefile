# HW1: C Basics - Makefile
# Usage:
#   make          - Build the program
#   make clean    - Remove compiled files
#   make sanitize - Build with AddressSanitizer (for debugging)

CC = gcc
CFLAGS = -Wall -Wextra -pedantic -std=c11 -g

# Source files
SRCS = main.c functions.c
OBJS = $(SRCS:.c=.o)
TARGET = hw1

# Default target
all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

%.o: %.c functions.h
	$(CC) $(CFLAGS) -c $< -o $@

# Build with sanitizers (for debugging memory issues)
sanitize: CFLAGS += -fsanitize=address,undefined
sanitize: clean all

# Clean up
clean:
	rm -f $(OBJS) $(TARGET)

# Run the program
run: $(TARGET)
	./$(TARGET)

.PHONY: all clean sanitize run

