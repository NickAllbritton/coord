#include <SFML/Graphics.hpp>

int main()
{
    auto wnd = sf::RenderWindow{ sf::VideoMode::getFullscreenModes().at(0), "COORD", sf::Style::Fullscreen };

    while(wnd.isOpen())
    {
        // TODO: abstract this into Game class

        // clear the screen from previous frame's drawing
        wnd.clear(sf::Color(32, 27, 32)); // background is a deep grey

        // draw the system
        // draw();
        wnd.display(); // display the window

        // first check for window events to handle
        // events();

        // next update the system
        // update();
    }

    return 0;
}