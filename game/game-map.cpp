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


bool GameMap::setPlayerCell(int playerX, int playerY)
{

    // cout << "Las coordenadas del jugador son: (" << playerX << ", " << playerY << ")" << endl;

    if(cells[playerY][playerX].isBlocked() == false){
        if (playerCell != NULL)
        {
            playerCell->id = 0; // Desmarca la celda anterior del jugador
        }

        playerCell = &cells[playerY][playerX]; // & consigue la direccion de memoria
        playerCell->id = '3';                  // Marca la celda del jugador con '3'
        return true;
    } else {
        return false;
    }


}

void GameMap::drawIntro() {
    string line;
    int row = 0;
    ifstream myFile("intro.txt");
    if (!myFile.is_open())
    {
        cout << "Unable to open map file." << endl;

        return;
    }
    while (getline(myFile, line)) {
        cout << line << endl;
    }
    cin >> line;
}

void GameMap::loadMapFromFile() {
    // ofstream fileCreate("map.txt");
    // if(!fileCreate.is_open()) {
    //     cout << "Unable to create map file." << endl;
    //     return;
    // }
    string line;
    int row = 0;
    ifstream myFile("map.txt");

    if(myFile.is_open()){
        while(getline(myFile, line)) {
            cout << line << endl;
            for (int col = 0; col < line.length(); ++col) {

                if(line[col] == '0')
                    cells[row][col].id = 0;
                else
                    cells[row][col].id = line[col];
            }
            row++;
        }
    } else {
        cout << "Unable to open map file." << endl;
    }
}
