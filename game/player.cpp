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
            lastY = y;
            y = y -1;
            break;
        case 'a':
            lastX = x;
            x -= 1;
            break;
        case 's':
            lastY = y;
            y = y +1;
            break;
        case 'd':
            lastX = x;
            x += 1;
            break;
        default:
            break;
    }

    cout << "Current position: (" << x << ", " << y << ")" << endl;
}


void Player::resetToSafePosition() {
    x = lastX;
    y = lastY;
}
