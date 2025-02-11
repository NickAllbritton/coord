sources=src/main.cpp

build: $(sources)
	g++ $(sources) -o coord `pkg-config --cflags --libs sfml-all` -std=c++20