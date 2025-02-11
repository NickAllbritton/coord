#include "Game.h"

Game::Game(sf::RenderWindow& wnd)
    : window(wnd)
{

}

void Game::run()
{
    // clear the screen from previous frame's drawing
    window.clear(sf::Color(32, 27, 32)); // background is a deep grey

    // draw the system
    draw(); // does nothing for now

    window.display(); // display the window

    // first check for window events to handle
    events();
    // next update the system
    update();
}

void Game::draw()
{
    // TODO: draw stuff
}

void Game::events()
{
    // TODO: handle events
}

void Game::update()
{
    // TODO: update the game state
}