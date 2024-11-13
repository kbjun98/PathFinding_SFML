#pragma once
#include <SFML/Graphics.hpp>
#include "Player.h"
#include "Map.h"

class Game
{
public:
    Game();
    void run();

private:
    void processEvents();
    void update();
    void render();

    sf::RenderWindow window;
    Player player;
    Map map;
};

