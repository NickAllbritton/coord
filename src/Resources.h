#include <string>
#include <vector>
#include <SFML/Graphics.hpp>

#ifndef RESOURCES_H
#define RESOURCES_H

class Resources
{
public:
    Resources(std::string dir);
    void loadFonts();
private:
    std::string dir;
public:
    sf::Font vanilla;
    sf::Font nexaLight;
    sf::Font nexaHeavy;
};

#endif