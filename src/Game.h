#include <SFML/Graphics.hpp>
#include "Resources.h"

#ifndef GAME_H
#define GAME_H

class Game
{
public:
    Game(sf::RenderWindow& wnd, Resources& r);
    ~Game() = default;
    void run();
private:
    void draw();
    void update();
    void events();
private:
    int width;
    int height;
    sf::RenderWindow& window; // reference to the game window
    Resources res;
    sf::Text title;
};

#endif