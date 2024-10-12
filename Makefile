CC = gcc
CFLAGS = -Wall
TARGET = vector_app

all: $(TARGET)

$(TARGET): src/main.c src/vector.c
	$(CC) $(CFLAGS) -o $(TARGET) src/main.c src/vector.c

clean:
	rm -f $(TARGET)
