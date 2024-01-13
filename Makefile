build:
	mkdir -p build; clang++ -o build/program src/main.cpp

run:
	./build/program
