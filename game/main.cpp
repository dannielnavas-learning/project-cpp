#include <iostream>
#include "player.h"

using namespace std;



int main() {
    bool isGameOver = false;
    Player Hero;

    cout << "Starting game loop..." << endl;
    while (isGameOver == false) {
        Hero.CallInput();
    }

    return 0;
}
