build:
	mkdir -p dist; clang++ -std=c++20 -o dist/program src/*.cpp

clean:
	rm -rf dist

.PHONY: clean dist

run:
	./dist/program
