bin/car : src/main.cpp src/carrito.cpp
	g++ src/main.cpp src/carrito.cpp -o bin/car -std=c++2a -lftxui-screen -lftxui-component -lftxui-dom -pthread -Iinclude
run : bin/car
	./bin/car