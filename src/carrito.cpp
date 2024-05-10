// Carrito.cpp

#include <fstream>
#include <Carrito.hpp>

using namespace std;
using namespace ftxui;

Carrito::Carrito(int x, int y) : x_(x), y_(y)
{
    // Cargar el dibujo del carrito desde el archivo.
    ifstream file("carrito.txt");
    wstring line;
    while (getline(file, line))
    {
        carrito_dibujo_ += line + L"\n";
    }
    file.close();
}

Element Carrito::Render()
{
    return hbox() | hcenter(text(carrito_dibujo_));
}

void Carrito::MoveLeft()
{
    x_--;
}

void Carrito::MoveRight()
{
    x_++;
}
