// rvencio Ago/2022
/* 
    g++ main.cpp Inicializar.cpp Desenhar*.cpp -o vai -lglut -lGL -lGLEW -lGLU  
    ./vai &
*/

#include <iostream>
#include <GL/glut.h>
#include <math.h>

#include "solzinho.hpp"

void Inicializar(void) {
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glLineWidth(3.0);
	glPointSize(2);
	gluOrtho2D(0.0, 600.0, 0.0, 600.0);
}

int main(int argc, char** argv){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_DEPTH | GLUT_RGBA);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(10, 10);
	glutCreateWindow("House of the Rising Sun");
	
    Inicializar();
	glutDisplayFunc(DrawSun);

	glutMainLoop();
	return 0;
}