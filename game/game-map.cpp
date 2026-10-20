#include "game-map.h"
#include <iostream>

using namespace std;

GameMap::GameMap()
{
}


void GameMap::draw()
{
    for (int i = 0; i < 15; ++i) {
        for (int p = 0; p < 10; ++p) {
            cout << 0 << " ";
        }
        cout << endl;
    }
}
