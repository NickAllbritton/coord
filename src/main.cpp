#include <SFML/Graphics.hpp>
#include "Game.h"

int main()
{
    auto wnd = sf::RenderWindow{ sf::VideoMode::getFullscreenModes().at(0), "COORD", sf::Style::Fullscreen };


    Resources r("./resources/");

    Game g(wnd, r);

    while(wnd.isOpen()) g.run();

    return 0;
}