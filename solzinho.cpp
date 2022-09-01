#include "solzinho.hpp"

void DrawSun(double centerX, double centerY, double raio)
{
    int nDots;
    double
        PI = 3.14,
        x = 0,
        y = 0,
        theta = 0,
        p;
    
    p = 2 * PI / nDots;

    glViewport(0, 0, 500, 500);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 0.0, 0.0);

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