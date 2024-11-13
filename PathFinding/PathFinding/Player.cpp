#include "Player.h"

Player::Player()
    : shape(sf::Vector2f(28, 28)), targetPosition(0, 0), speed(2.0f) {
    shape.setFillColor(sf::Color::Blue);
    shape.setPosition(2, 2);
    pos.x = 2.0f;
    pos.y = 2.0f;
}

void Player::setTargetPosition(const sf::Vector2i& gridPosition) {
    targetPosition = gridPosition;
}

void Player::update() {
    sf::Vector2f currentPosition = shape.getPosition();
    if (currentPosition.x < targetPosition.x) currentPosition.x += speed;
    if (currentPosition.y < targetPosition.y) currentPosition.y += speed;
    shape.setPosition(currentPosition);
    pos = shape.getPosition();
}

void Player::draw(sf::RenderWindow& window) {
    window.draw(shape);
}