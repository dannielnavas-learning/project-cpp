#ifndef GAME_MAP_H
#define GAME_MAP_H

#include "map-cell.h"

class GameMap
{
public:
    GameMap();

    MapCell cells[15][10];

    void draw();

protected:
private:
};

#endif // GAME_MAP_H
