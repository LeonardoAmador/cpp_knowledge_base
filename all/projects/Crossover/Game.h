#ifndef GAME_H
#define GAME_H

#include "Tree.h"
#include "Player.h"

class Game {
public:
    Game();
    void start();

private:
    Tree trees[50];
    Player player;
    int targetTree;
    int attempts;

    static Game* instance;

    static void displayWrapper();
    static void keyboardWrapper(unsigned char key, int x, int y);

    void display();
    void keyboard(unsigned char key, int x, int y);
    void initOpenGL();

    void checkGameOver();
};

#endif

