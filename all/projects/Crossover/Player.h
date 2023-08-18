#ifndef PLAYER_H
#define PLAYER_H

class Player {
private:
    float positionX;
    float positionY;

public:
    Player();
    void setPosition(float x, float y);
    void draw();
};

#endif
