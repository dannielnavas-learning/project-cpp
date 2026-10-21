#include "map-cell.h"

MapCell::MapCell()
{
    id = 0;
}

bool MapCell::isBlocked() {
    if(id == '1') // Assuming '1' represents a blocked cell
        return true;
    return false;
}
