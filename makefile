bin/car : src/main.cpp
	g++ src/main.cpp -o bin/car -std=c++2a -lftxui-screen -lftxui-component -lftxui-dom -Iinclude

run : bin/car
	./bin/car