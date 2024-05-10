#include <iostream>
#include <ftxui/component/screen_interactive.hpp>
#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <Carrito.hpp>
#include <chrono>
#include <thread>

using namespace std;
using namespace ftxui;

int main()
{
    auto screen = ScreenInteractive::FitComponent();

    int carrito_x = 0; // Por ejemplo, puedes iniciar el carrito en la posición (0, 0).
    int carrito_y = 0;
    Carrito carrito(carrito_x, carrito_y);

    while (true)
    {
        carrito.MoveRight();

        Elements elements;
        elements.push_back(carrito.Render());
        auto document = hbox(move(elements));
        Render(screen, document);

        this_thread::sleep_for(chrono::milliseconds(100));
    }

    return 0;
}
