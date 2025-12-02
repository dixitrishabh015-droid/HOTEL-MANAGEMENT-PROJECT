CC = gcc
CFLAGS = -I include

SRC = src/main.c src/guest.c src/room.c src/services.c
OBJ = $(SRC:.c=.o)
TARGET = hotel

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $(TARGET)

clean:
	rm -f $(OBJ) $(TARGET)

run: all
	./hotel
