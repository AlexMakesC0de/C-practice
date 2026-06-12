CC = cc
CFLAGS = -Wall -Wextra -std=c11
LDLIBS = -lm
TARGET = calc
OBJS = main.o calc.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS) $(LDLIBS)

main.o: main.c calc.h
	$(CC) $(CFLAGS) -c main.c

calc.o: calc.c calc.h
	$(CC) $(CFLAGS) -c calc.c

clean:
	rm -f $(TARGET) $(OBJS)

.PHONY: all clean
