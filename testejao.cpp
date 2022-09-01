// rvencio Ago/2022
/* 
    g++ main.cpp *.cpp *.hpp -o vai -lglut -lGL -lGLEW -lGLU  
    ./vai &
*/

#include <iostream>
#include <GL/glut.h>
#include <math.h>

//#include "solzinho.hpp"
#include "circle.hpp"

void Inicializar(void) {
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glLineWidth(3.0);
	glPointSize(2);
	gluOrtho2D(0.0, 600.0, 0.0, 600.0);
}

void Draw()
{
    Circle sol = Circle(300.0, 300.0, 100.0);
    sol.setColor(1.0, 1.0, 0);
    sol.Draw();
}

int main(int argc, char** argv){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_DEPTH | GLUT_RGBA);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(10, 10);
	glutCreateWindow("House of the Rising Sun");
	
    Inicializar();
	glutDisplayFunc(Draw);

	glutMainLoop();
	return 0;
}
