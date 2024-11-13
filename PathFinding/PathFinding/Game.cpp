#include "Game.h"

Game::Game()
    : window(sf::VideoMode(640, 480), "Pathfinding Grid"), player(), map(20, 15) {}

void Game::run() {
    while (window.isOpen()) {
        processEvents();
        update();
        render();
    }
}

void Game::processEvents() {
    sf::Event event;
    while (window.pollEvent(event)) {
        if (event.type == sf::Event::Closed)
            window.close();

        if (event.type == sf::Event::MouseButtonPressed) {
            sf::Vector2i mousePos = sf::Mouse::getPosition(window);
            player.setTargetPosition(map.getPixelPosition(mousePos));
        }
    }
}

void Game::update() {
    player.update();
}

void Game::render() {
    window.clear();
    map.draw(window);
    player.draw(window);
    window.display();
}