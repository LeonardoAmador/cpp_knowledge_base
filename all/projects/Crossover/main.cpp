#include <iostream>
#include <cstdlib>
#include <ctime>
#include <locale.h>
#include "Game.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "Turkish");
    
    srand(static_cast<unsigned int>(time(0)));

    Game game;
    game.start();

    return 0;
}

