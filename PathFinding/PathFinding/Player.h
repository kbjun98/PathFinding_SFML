#pragma once
#include <SFML/Graphics.hpp>

class Player {
public:
    Player();
    void setTargetPosition(const sf::Vector2i& position);
    void update();
    void draw(sf::RenderWindow& window);

private:
    sf::RectangleShape shape;
    sf::Vector2i targetPosition;
    float speed;

    sf::Vector2f pos;
};
