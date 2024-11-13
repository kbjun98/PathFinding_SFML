#pragma once
#include <SFML/Graphics.hpp>

class Map {
public:
    Map(int width, int height);
    void draw(sf::RenderWindow& window);
    sf::Vector2i getGridPosition(const sf::Vector2i& pixelPos);
    sf::Vector2i getPixelPosition(const sf::Vector2i& pixelPos);

private:
    int width, height;
    int cellSize;
};
