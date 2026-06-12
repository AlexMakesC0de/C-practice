CC = cc
CFLAGS = -Wall -Wextra -std=c11
TARGET = calc

all: $(TARGET)

$(TARGET): main.c
	$(CC) $(CFLAGS) -o $(TARGET) main.c

clean:
	rm -f $(TARGET)

.PHONY: all clean
