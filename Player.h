#pragma once
#include <string>
using namespace std;

class Player {
private:
    string name;
    int health;
    int attack;
    int x;
    int y;

public:
    Player(string n, int h, int a);

    int getX() const;
    int getY() const;

    void setX(int x);
    void setY(int y);

    string getName() const;
    int getHealth() const;
};
