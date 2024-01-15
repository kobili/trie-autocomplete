build:
	mkdir -p dist; clang++ -o dist/program src/*.cpp

clean:
	rm -rf dist

.PHONY: clean dist

run:
	./dist/program
