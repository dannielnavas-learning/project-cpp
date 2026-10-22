#include <iostream>
#include "player.h"
#include "map-cell.h"
#include "game-map.h"

using namespace std;


int main() {
    Player Hero;
    GameMap map;

    map.drawIntro();
    map.draw();

    // cout << "Starting game loop..." << endl;
    while (map.isGameOver == false) {
        cout << "Ingrese su movimiento: 'w', 'a', 's', 'd'" << endl;
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
