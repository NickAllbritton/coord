#include <SFML/Graphics.hpp>

#ifndef GAME_H
#define GAME_H

class Game
{
public:
    Game(sf::RenderWindow& wnd);
    ~Game() = default;
    void run();
private:
    void draw();
    void update();
    void events();
private:
    sf::RenderWindow& window; // reference to the game window
};

#endif