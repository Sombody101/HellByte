.PHONY: build test

build:
	g++ -std=c++17 ./src/main.cpp -o ./build/hellc

test:
	@echo -----   TEST   -----
	time ./build/hellc ./test/main.hs
	@echo ----- TEST END -----