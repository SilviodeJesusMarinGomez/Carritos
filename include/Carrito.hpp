// Carrito.hpp

#pragma once

#include <string>
#include <ftxui/component/component.hpp>

using namespace std;
using namespace ftxui;

class Carrito
{
public:
    Carrito(int x, int y);
    Element Render();
    void MoveLeft();
    void MoveRight();

private:
    int x_;
    int y_;
    wstring carrito_dibujo_;
};
