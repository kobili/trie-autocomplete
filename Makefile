build:
	mkdir -p build; clang++ -o build/program src/*.cpp

clean:
	rm -rf build

.PHONY: clean build

run:
	./build/program
