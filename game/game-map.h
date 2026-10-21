#ifndef GAME_MAP_H
#define GAME_MAP_H

#include "map-cell.h"

class GameMap
{
public:
    GameMap();

    // apuntador

    MapCell *playerCell;

    MapCell cells[15][10];

    void draw();

    // esta funcion obtine las coordenadas del jugador y actualiza la celda correspondiente que es el mapa
    void setPlayerCell(int playerX, int playerY );



protected:
    void loadMapFromFile();

private:
};

#endif // GAME_MAP_H
