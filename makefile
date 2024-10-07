TARGET = src/Main.cpp src/Core/Engine.cpp src/Core/Tile.cpp

BIN = bin/main

LIBS = -lsfml-graphics -lsfml-window -lsfml-system

all:
	g++ $(TARGET) -o $(BIN) $(LIBS)
	./bin/main

run:
	./bin/main

compile:
	g++ $(TARGET) -o $(BIN) $(LIBS)