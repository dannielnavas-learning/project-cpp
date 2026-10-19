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
            y = y +1;
            cout << "Moving up" << endl;
            break;
        case 'a':
            x -= 1;
            cout << "Moving left" << endl;
            break;
        case 's':
            y = y -1;
            cout << "Moving down" << endl;
            break;
        case 'd':
            x += 1;
            cout << "Moving right" << endl;
            break;
        default:
            cout << "Invalid input" << endl;
            break;
    }

    cout << "Current position: (" << x << ", " << y << ")" << endl;
}
