#include <iostream>
#include <math.h>
#include <GL/glut.h>

#include "house.cpp"

void setup();

int main(int argc, char** argv){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_DEPTH | GLUT_RGBA);
    glutInitWindowSize(1000,1000);
    glutInitWindowPosition(10, 10);
    glutCreateWindow("Casinha");

    House house;
    
    setup();
    house.draw();

    glutMainLoop();

    return 0;
}

void setup() {
    glClearColor(1.0,1.0,1.0,1.0);
    glLineWidth(3.0);
    glPointSize(2);
    gluOrtho2D(0.0,600.0,0.0,600.0);
}
