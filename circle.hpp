#include<math.h>
#include<GL/glut.h>

class Circle
{
    private:
        double
            centerX,
            centerY,
            color[3],
            raio;
        
        int 
            nDots;
        
        void 
            sDraw(),
            tDraw();
        
        bool
            triagle;

    public:
        Circle(double posx, double posy, double r);
        void 
            setColor(double r, double g, double b),
            setNDots(int n),
            Draw();
};