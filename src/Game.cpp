#include "Game.h"

Game::Game(sf::RenderWindow& wnd, Resources& res)
    : window(wnd), res(res)
{
    // Load resources
    res.loadFonts();

    // Calculate proportions of window client area
    width = window.getSize().x;
    height= window.getSize().y;


    title.setString("COORDN8");
    title.setFont(res.vanilla);
    int titleTextSize = height * 0.1; // title height is 10% of window height
    title.setCharacterSize(titleTextSize);
    title.setPosition({ width*0.5 - title.getLocalBounds().getSize().x*0.5, 0.f });
    title.setFillColor(sf::Color(25, 5, 150));
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
    // Draw title
    window.draw(title);

}

void Game::events()
{
    for(auto event = sf::Event{}; window.pollEvent(event);)
    {
        switch(event.type)
        {
            case sf::Event::Closed:
                window.close(); // OS close-window code (Win+Q on my laptop) (Alt+F4 on windows)
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