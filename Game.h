#pragma once
#include "Player.h"
#include "Map.h"

class Game {
private:
    Player player;
    Map gameMap;
    bool running;

public:
    Game();
    void run();

private:
    void processInput();
};
