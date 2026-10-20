#include <iostream>
#include "player.h"
#include "map-cell.h"
#include "game-map.h"

using namespace std;


int main() {
    bool isGameOver = false;
    Player Hero;
    GameMap map;

    cout << "Starting game loop..." << endl;
    while (isGameOver == false) {
        Hero.CallInput();
        map.draw();
    }

    return 0;
}
