#include "Game.h"
#include <iostream>
#include <cctype>
using namespace std;

Game::Game()
    : player("Hero", 100, 10),
      gameMap(30, 15, &player),
      running(true) {}

void Game::run() {
    while(running) {

        cout << string(20, '\n');

        gameMap.draw();

        cout << "Player: " << player.getName() << endl;
        cout << "Health: " << player.getHealth() << endl;
        cout << "Position: (" << player.getX() << ", " << player.getY() << ")" << endl;

        cout << "Move (WASD, Q to quit): ";
        processInput();
    }
}

void Game::processInput() {
    char ch;
    cin >> ch;
    ch = toupper(ch);

    int newX = player.getX();
    int newY = player.getY();

    if(ch == 'W') newY--;
    else if(ch == 'S') newY++;
    else if(ch == 'A') newX--;
    else if(ch == 'D') newX++;
    else if(ch == 'Q') {
        running = false;
        return;
    }

    if(!gameMap.isWall(newX, newY)){
        player.setX(newX);
        player.setY(newY);
    }
}
