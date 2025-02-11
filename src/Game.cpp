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
    for(auto event = sf::Event{}; window.pollEvent(event);)
    {
        switch(event.type)
        {
            case sf::Event::Closed:
                window.close(); // OS close-window code (Win+Q on my laptop)
                break;
            case sf::Event::KeyPressed:
                if(event.key.code == sf::Keyboard::Q) window.close(); //  press q to quit the game
                else if(event.key.code == sf::Keyboard::P) // TODO: Press P to pause
                break;
        }
    }
}

void Game::update()
{
    // TODO: update the game state
}