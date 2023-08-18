#include <GL/glut.h>
#include <cmath>
#include "Player.h"

Player::Player() {
    positionX = 0.0;
    positionY = 0.0;
}

void Player::setPosition(float x, float y) {
    positionX = x;
    positionY = y;
}

void Player::draw() {
    glPushMatrix();
    glTranslatef(positionX - 0.2, positionY - 0.8, 0.0);

    int numSections = 12;
    float innerRadius = 0.1;
    float outerRadius = 0.15;

    float sectionAngle = 360.0 / numSections;

    for (int i = 0; i < numSections; i++) {
        float startAngle = i * sectionAngle;
        float endAngle = (i + 1) * sectionAngle;
        float gradient = static_cast<float>(i) / numSections;
        float red = gradient;
        float green = 1.0 - gradient;
        float blue = 0.0;
        
        glBegin(GL_TRIANGLE_STRIP);
        for (float angle = startAngle; angle <= endAngle; angle++) {
            float theta = angle * 3.14159 / 180;
            float x = outerRadius * cos(theta);
            float y = outerRadius * sin(theta);
            glColor3f(red, green, blue);
            glVertex2f(x, y);

            x = innerRadius * cos(theta);
            y = innerRadius * sin(theta);
            glColor3f(red, green, blue);
            glVertex2f(x, y);
        }
        glEnd();
    }

    glPopMatrix();
}

