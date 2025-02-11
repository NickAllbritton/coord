sources=src/main.cpp src/Game.cpp src/Resources.cpp

flags=`pkg-config --cflags gtkmm-4.0`
libs=`pkg-config --libs gtkmm-4.0`
versioncpp=-std=c++
target=coord

build: $(sources)
	g++ $(sources) -o $(target) $(flags) $(libs) $(versioncpp)