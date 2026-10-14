#include <iostream>
using namespace std; // si esta linea no existe, se tendría que usar std:: antes de cout, cin, endl, etc.

void drawMap(int heroPosition, char map[5]);

int main()
{
    int heroPosition = 1;
    char gameMap[5] = {'1', '1', '1', '1', '1'};

    drawMap(heroPosition, gameMap);
    return 0;
}

void drawMap(int heroPosition, char map[5])
{
    for (int i = 0; i < 5; i++)
    {
        if (i != heroPosition)
            cout << map[i];
        else
            cout << 'H';
    }
    cout << endl;
}
