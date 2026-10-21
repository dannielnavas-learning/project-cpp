#include "game-map.h"
#include <iostream>
#include <fstream>

using namespace std;

GameMap::GameMap()
{
    // vacia el apuntador para que no tenga datos iniciales
    playerCell = NULL;
    loadMapFromFile();
}


void GameMap::draw()
{
    for (int i = 0; i < 15; ++i) {
        for (int p = 0; p < 10; ++p) {
            cout << cells[i][p].id << " ";
        }
        cout << endl;
    }
}


void GameMap::setPlayerCell(int playerX, int playerY)
{
    // cout << "Las coordenadas del jugador son: (" << playerX << ", " << playerY << ")" << endl;

    if(playerCell != NULL) {
        playerCell->id = 0;  // Desmarca la celda anterior del jugador
    }

    playerCell = &cells[playerY][playerX];  // & consigue la direccion de memoria
    playerCell->id = 3;  // Marca la celda del jugador con 'P'
}

void GameMap::loadMapFromFile() {
    // ofstream fileCreate("map.txt");
    // if(!fileCreate.is_open()) {
    //     cout << "Unable to create map file." << endl;
    //     return;
    // }
    string line;
    ifstream myFile("map.txt");

    if(myFile.is_open()){


    } else {
        cout << "Unable to open map file." << endl;
    }
}
