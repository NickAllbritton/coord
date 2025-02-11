#include "Resources.h"

Resources::Resources(std::string dir)
    : dir(dir)
{

}

void Resources::loadFonts()
{
    vanilla.loadFromFile(dir + std::string("VanillaRavioli_Demo.ttf"));

    nexaLight.loadFromFile(dir + std::string("Nexa-ExtraLight.ttf"));

    nexaHeavy.loadFromFile(dir + std::string("Nexa-Heavy.ttf"));
}