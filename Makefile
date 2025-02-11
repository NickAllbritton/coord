sources=src/main.cpp src/Game.cpp src/Resources.cpp

build: $(sources)
	g++ $(sources) -o coord `pkg-config --cflags --libs sfml-all` -std=c++20