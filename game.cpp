#include <iostream>
using namespace std; // si esta linea no existe, se tendría que usar std:: antes de cout, cin, endl, etc.

void drawMap(int heroPositionX, int heroPositionY, char map[5][5]);

int main()
{
    int heroPositionX = 2;
    int heroPositionY = 2;
    bool isGameOver = false;
    char input = ' ';
    char gameMap[5][5] = {
        {'1', '1', '1', '1', '1'},
        {'1', '1', '1', '1', '1'},
        {'1', '1', '1', '1', '1'},
        {'1', '1', '1', '1', '1'},
        {'1', '1', '1', '1', '1'}
    };

    drawMap(heroPositionX, heroPositionY, gameMap);

    while (isGameOver == false)
    {
        cin >> input;

        if (input == 'd')
            heroPositionY++;
        else if (input == 'a')
            heroPositionY--;
        else if (input == 'w')
            heroPositionX--;
        else if (input == 's')
            heroPositionX++;
        else if (input == 'q')
            isGameOver = true;

        drawMap(heroPositionX, heroPositionY, gameMap);
    }

    return 0;
}

void drawMap(int heroPositionX, int heroPositionY, char map[5][5])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i != heroPositionX || j != heroPositionY)
                cout << map[i][j];
            else
                cout << 'H';
        }
        cout << endl;
    }
}
