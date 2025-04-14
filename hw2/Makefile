CC = gcc
CFLAGS = -Wall -fPIC
LDFLAGS = -shared

LIB = liblisssa.so
TARGET = app

OBJS = lisssa.o

all: $(LIB) $(TARGET)

$(LIB): $(OBJS)
	$(CC) $(LDFLAGS) -o $@ $^

$(TARGET): main.o $(LIB)
	$(CC) -o $@ main.o -L. -llisssa

main.o: main.c lisssa.h
	$(CC) $(CFLAGS) -c main.c

lisssa.o: lisssa.c lisssa.h
	$(CC) $(CFLAGS) -c lisssa.c

clean:
	rm -f *.o *.so $(TARGET)
