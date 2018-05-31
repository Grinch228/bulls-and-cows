CC=gcc
CFLAGS=-Wall -Werror
GTKFLAGS=`pkg-config --cflags gtk+-3.0`
LIBS=`pkg-config --libs gtk+-3.0` -lm

.PHONY: default clean

default: bin/game

bin/game: bin build/main.o build/game.o
	$(CC) $(CFLAGS) build/game.o build/main.o -o bin/game

build/main.o: build src/main.c
	$(CC) $(CFLAGS) -c src/main.c -o build/main.o

build/game.o: build src/game.c
	$(CC) $(CFLAGS) -c src/game.c -o build/game.o

test: bin build/main-test.o build/gui.o build/game.o build/utils.o
	$(CC) $(CFLAGS) build/main-test.o build/game.o -o bin/test
	bin/test

build/main-test.o: build test/main.c
	$(CC) $(CFLAGS) -I thirdparty -I src -c test/main.c -o build/main-test.o

build:
	mkdir build

bin:
	mkdir bin

clean:
	rm -rf bin build