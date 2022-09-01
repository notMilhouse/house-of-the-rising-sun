#include "circle.hpp"

Circle::Circle(double posx, double posy, double r)
{
    double color[] = {0.0, 0.0, 0.0};
    centerX = posx;
    centerY = posy;
    raio = r;
    nDots = 100;
}

void Circle::setColor(double r, double g, double b)
{
    color[0] = r;
    color[1] = g;
    color[2] = b;
}

void Circle::setNDots(int n)
{
    nDots = n;
}

void Circle::Draw()
{
    int nDots;
    double
        PI = 3.14,
        x = 0,
        y = 0,
        delta = 0,
        d = 0,
        var = 0,
        theta = 0,
        p;
    
    p = 2 * PI / nDots;
    d = 24 * PI / nDots;

    glViewport(500, 500, 500, 500);

    for(int i=0; i < nDots; i++)
    {
        glBegin(GL_LINES);

        x = (raio + var) * cos(theta) + centerX;
        y = (raio + var) * sin(theta) + centerY;
        
        delta += d; 
        theta += p;

        var = (abs(cos(delta))*(-1)+1)*30;

        glColor3f(color[0], color[1], color[2]);
        glVertex2f(x,y);

        glColor3f(1, 1, 1);
        glVertex2f(centerX, centerY);

        glEnd();
    }

    glFlush();
}
