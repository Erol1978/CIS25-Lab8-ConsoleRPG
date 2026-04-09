#include "Player.h"

Player::Player(string n, int h, int a) {
    name = n;
    health = h;
    attack = a;
    x = 0;
    y = 0;
}

int Player::getX() const { return x; }
int Player::getY() const { return y; }

void Player::setX(int xPos) { x = xPos; }
void Player::setY(int yPos) { y = yPos; }

string Player::getName() const { return name; }
int Player::getHealth() const { return health; }
