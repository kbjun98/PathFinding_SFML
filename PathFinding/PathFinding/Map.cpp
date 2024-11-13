#include "Map.h"

Map::Map(int width, int height)
    : width(width), height(height), cellSize(32) {}

void Map::draw(sf::RenderWindow& window) {
    for (int i = 0; i < width; ++i) {
        for (int j = 0; j < height; ++j) {
            sf::RectangleShape cell(sf::Vector2f(cellSize - 1, cellSize - 1));
            cell.setPosition(static_cast<float>(i * cellSize), static_cast<float>(j * cellSize));
            cell.setFillColor(sf::Color::White);
            window.draw(cell);
        }
    }
}

sf::Vector2i Map::getGridPosition(const sf::Vector2i& pixelPos) {
    return sf::Vector2i(pixelPos.x / cellSize, pixelPos.y / cellSize);
}

sf::Vector2i Map::getPixelPosition(const sf::Vector2i& pixelPos) {
    sf::Vector2i gridPos = getGridPosition(pixelPos);
    return sf::Vector2i(gridPos.x * cellSize, gridPos.y * cellSize);
}