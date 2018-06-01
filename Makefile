flags  = -Wall -Werror -std=c99

.PHONY: clean open

default: bin/game

test: ./bin/game-test
	./bin/game-test

./bin/game: ./build/main.o ./build/game.o bin test
	gcc  $(flags) -o ./bin/game ./build/main.o ./build/game.o -lm

./build/main.o: ./src/main.c ./src/game.h build
	gcc  $(flags) -o build/main.o -c src/main.c -lm

./build/game.o: ./src/game.c ./src/game.h build
	gcc $(flags) -o ./build/game.o -c ./src/game.c -lm

bin/game-test: ./build/main_test.o ./build/game.o bin
	gcc  $(flags) ./build/main_test.o ./build/game.o -o bin/game-test -lm

./build/main_test.o: ./test/tests.c ./thirdparty/ctest.h ./src/game.h build
	gcc $(flags) -I thirdparty -I src -c ./test/tests.c -o ./build/main_test.o -lm



build:
	mkdir build

bin:
	mkdir bin

clean:
	rm -rf build bin

open:
	./bin/board