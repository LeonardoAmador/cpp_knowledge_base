#include <GL/glut.h>
#include "Tree.h"

Tree::Tree() {
    number = 0;
}

void Tree::setNumber(int number) {
    this->number = number;
}

void Tree::draw() {
    glPushMatrix();
    glTranslatef(0.0, 0.0, -0.5 + (number / 10) * 0.2);
    
    glColor3f(0.5, 0.3, 0.0);
    glBegin(GL_POLYGON);
        glVertex2f(0.05, 0.0);
        glVertex2f(0.1, 0.0);
        glVertex2f(0.1, 0.3);
        glVertex2f(0.05, 0.3);
    glEnd();
    
    glColor3f(0.0, 0.5 - (number / 10) * 0.16, 0.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(0.0, 0.3);
        glVertex2f(0.15, 0.3);
        glVertex2f(0.075, 0.45);
        
        glVertex2f(0.025, 0.45);
        glVertex2f(0.125, 0.45);
        glVertex2f(0.075, 0.55);
        
        glVertex2f(0.05, 0.55);
        glVertex2f(0.1, 0.55);
        glVertex2f(0.075, 0.65);
    glEnd();
    
    glColor3f(1.0, 1.0, 1.0);
    glRasterPos2f(0.06, 0.15);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, '0' + number);
    
    glPopMatrix();
}

