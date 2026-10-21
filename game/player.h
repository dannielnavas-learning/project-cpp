#ifndef PLAYER_H
#define PLAYER_H

class Player
{
public:
    Player();

    void CallInput();

    int x, y;

    int lastX, lastY;

    void resetToSafePosition();

protected:


private:
};

#endif // PLAYER_H
