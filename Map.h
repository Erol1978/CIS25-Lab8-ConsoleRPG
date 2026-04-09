#pragma once
#include "Player.h"

class Map {
private:
    char** grid;
    int width;
    int height;
    Player* playerPtr;

public:
    Map(int w, int h, Player* p);
    ~Map();

    void draw() const;
    bool isWall(int x, int y) const;
};
