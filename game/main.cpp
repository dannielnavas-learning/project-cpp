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
        // loop del juego
        Hero.CallInput();
        //Actualizacion del jugador en el mapa
        if (!map.setPlayerCell(Hero.x, Hero.y)) {
            Hero.resetToSafePosition();
        }
        // se dibuja el mapa
        map.draw();


    }

    return 0;
}
