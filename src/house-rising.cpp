#include <iostream>
#include <math.h>
#include <GL/glut.h>

#include "house.cpp"
#include "circle.hpp"

void setup();
void display();

int main(int argc, char** argv){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_DEPTH | GLUT_RGBA);
    glutInitWindowSize(1000,1000);
    glutInitWindowPosition(10, 10);
    glutCreateWindow("Casinha");
    glutDisplayFunc(display);

    glutMainLoop();

    return 0;
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

    House house = House(300,300);

    setup();
    house.draw();

    Circle sol = Circle(300.0, 300.0, 100.0);
    sol.setColor(1.0, 0.5, 0);

    sol.Draw();
}

void setup() {
    glClearColor(1.0,1.0,1.0,1.0);
    glLineWidth(3.0);
    glPointSize(2);
    gluOrtho2D(0.0,600.0,0.0,600.0);
}