#include <SFML/Graphics.hpp>
#include "Game.h"

int main()
{
    auto wnd = sf::RenderWindow{ sf::VideoMode::getFullscreenModes().at(0), "COORD", sf::Style::Fullscreen };

    Game g(wnd);

    while(wnd.isOpen()) g.run();

    return 0;
}