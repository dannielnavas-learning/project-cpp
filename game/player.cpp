#include <iostream>
#include "player.h"

using namespace std;

Player::Player() {
    x = 1;
    y = 1;
}

void Player::CallInput() {
    // aqui llamaria los inputs

    // cout << "Calling input..." << endl;

    char userInput = '\0';

    cin >> userInput;

    switch (userInput) {
        case 'w':
            y = y -1;
            break;
        case 'a':
            x -= 1;
            break;
        case 's':
            y = y +1;
            break;
        case 'd':
            x += 1;
            break;
        default:
            break;
    }

    cout << "Current position: (" << x << ", " << y << ")" << endl;
}
