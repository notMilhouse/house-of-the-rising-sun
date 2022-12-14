#include "solzinho.hpp"

void DrawSun()
{
    int nDots;
    double
        centerX = 300.0,
        centerY = 300.0,
        raio = 200.0,
        PI = 3.14,
        x = 0,
        y = 0,
        theta = 0,
        p;
    
    p = 2 * PI / nDots;

    glViewport(0, 0, 500, 500);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1, 1, 0);

    glBegin(GL_POLYGON);

    for(int i=0; i < nDots; i++)
    {
        x = raio * cos(theta) + centerX;
        y = raio * sin(theta) + centerY;

        theta += p;
        glVertex2i(x,y);
    }

    glEnd();
    glFlush();
}