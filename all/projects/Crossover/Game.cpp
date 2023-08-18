#include <GL/glut.h>
#include <iostream>
#include <locale.h>
#include <sstream>
#include <cstdlib>
#include <ctime>
#include "Game.h"

using namespace std;

Game* Game::instance = NULL;

Game::Game() {
    for (int i = 0; i < 50; i++) {
        trees[i].setNumber(i + 1);
    }

    srand(time(NULL));

    targetTree = rand() % 50 + 1;

    attempts = 0;
}

void Game::displayWrapper() {
    instance->display();
}

void Game::keyboardWrapper(unsigned char key, int x, int y) {
    instance->keyboard(key, x, y);
}

void Game::display() {
    glClear(GL_COLOR_BUFFER_BIT);

    for (int i = 0; i < 50; i++) {
        trees[i].draw();
    }

    player.draw();

    glColor3f(0.0, 0.0, 0.0);
    glRasterPos2f(-0.95, -0.95);
    stringstream ss;
    ss << "Tentativas restantes: " << 5 - attempts;
    string attemptsMsg = ss.str();
    for (size_t i = 0; i < attemptsMsg.length(); i++) {
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, attemptsMsg[i]);
    }

    glFlush();
}

void Game::keyboard(unsigned char key, int x, int y) {
    if (attempts >= 5) {
        cout << "Você perdeu o jogo! Suas tentativas acabaram." << endl;
        exit(0);
    }

    if (key >= '1' && key <= '9') {
        int guess = key - '0';

        if (guess == targetTree) {
            cout << "Parabéns! Você acertou a árvore " << targetTree << "." << endl;
            exit(0);
        } else {
            cout << "Você errou a árvore " << guess << "." << endl;
            if (guess < targetTree) {
                cout << "Estou mais à direita." << endl;
            } else {
                cout << "Estou mais à esquerda." << endl;
            }
            attempts++;
        }
    }

    checkGameOver();

    glutPostRedisplay();
}

void Game::initOpenGL() {
    int argc = 0;
    char* argv[] = { NULL };
    glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800, 600);
    glutCreateWindow("Lanterna Verde");
    glClearColor(1.0, 1.0, 1.0, 1.0);

    glutDisplayFunc(displayWrapper);
    glutKeyboardFunc(keyboardWrapper);
}

void Game::start() {
    instance = this;

    initOpenGL();
    
    cout << "O jogo começou! Tente adivinhar o número da árvore correta." << endl;

    glutMainLoop();
}

void Game::checkGameOver() {
    if (attempts >= 5) {
        cout << "Você perdeu o jogo! Suas tentativas acabaram." << endl;
        exit(0);
    }
}

