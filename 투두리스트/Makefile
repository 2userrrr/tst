CC = gcc
CFLAGS = -Wall

TARGET = todo

SRCS = main.c load.c todomap.c

all:
    $(CC) $(CFLAGS) $(SRCS) -o $(TARGET)

run: all
    ./$(TARGET)

clean:
    rm -f $(TARGET)