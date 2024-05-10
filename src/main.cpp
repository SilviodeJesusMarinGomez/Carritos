// Incluir las librerías necesarias y los archivos de encabezado.

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
    // Inicializar la pantalla interactiva de FTXUI con el tamaño predeterminado.
    auto screen = ScreenInteractive::FitComponent();

    // Crear un objeto Carrito proporcionando las coordenadas iniciales.
    int carrito_x = 0; // Por ejemplo, puedes iniciar el carrito en la posición (0, 0).
    int carrito_y = 0;
    Carrito carrito(carrito_x, carrito_y);

    // Bucle principal del juego.
    while (true)
    {
        // Actualizar la posición del carrito.
        carrito.MoveRight();

        // Dibujar el carrito en la pantalla.
        Elements elements;
        elements.push_back(carrito.Render());
        auto document = hbox(std::move(elements));
        Render(screen, document);

        // Esperar un breve período antes de la próxima actualización.
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    return 0;
}
