#include <GL/glut.h>
#include <math.h>

class House {
    private:
        int length;
        int height;
    public:
        House(int l, int h){
            length = l;
            height = h;
        }
        void drawBorder(){
            
            glColor3f(0,0,0);
            glBegin(GL_QUADS);
                glVertex2f(10,10);
                glVertex2f(10 + length, 10);
                glVertex2f(10 + length, 10 + height);
                glVertex2f(10, 10 + height);
            glEnd();

            glColor3f(1,1,1);
            glBegin(GL_QUADS);
                glVertex2f(10 + 5, 10 + 5);
                glVertex2f(10 - 5 + length, 10 + 5);
                glVertex2f(10 - 5 + length, 10 + height - 5);
                glVertex2f(10 + 5, 10 + height - 5);
            glEnd();
        }
        void drawRoof() {
            glColor3f(0,0,0);
            glBegin(GL_TRIANGLES);
                glVertex2f(10,10+height);
                glVertex2f(10 + length, 10+height);
                glVertex2f(10 + (length/2), 10+height+150);
            glEnd();
        }
        void drawWindow(){
            
            glColor3f(0,0,0);
            glBegin(GL_QUADS);
                glVertex2f(30, height*0.9);
                glVertex2f(30 + length*0.5, height*0.9);
                glVertex2f(30 + length*0.5, height*0.5);
                glVertex2f(30, height*0.5);
            glEnd();

            
            glColor3f(1,1,1);
            glBegin(GL_QUADS);
                glVertex2f(40, height*0.85);
                glVertex2f(40 + length*0.2, height*0.85);
                glVertex2f(40 + length*0.2, height*0.72);
                glVertex2f(40, height*0.72);
            glEnd();

            glColor3f(1,1,1);
            glBegin(GL_QUADS);
                glVertex2f(40, height*0.68);
                glVertex2f(40 + length*0.2, height*0.68);
                glVertex2f(40 + length*0.2, height*0.55);
                glVertex2f(40, height*0.55);
            glEnd();


            glColor3f(1,1,1);
            glBegin(GL_QUADS);
                glVertex2f(50 + length*0.2, height*0.85);
                glVertex2f(50 + length*0.4, height*0.85);
                glVertex2f(50 + length*0.4, height*0.72);
                glVertex2f(50 + length*0.2, height*0.72);
            glEnd();

            glColor3f(1,1,1);
            glBegin(GL_QUADS);
                glVertex2f(50 + length*0.2, height*0.68);
                glVertex2f(50 + length*0.4, height*0.68);
                glVertex2f(50 + length*0.4, height*0.55);
                glVertex2f(50 + length*0.2, height*0.55);
            glEnd();
        }
        void drawDoor(){

            glColor3f(0,0,0);
            glBegin(GL_QUADS);
                glVertex2f(length * 0.7, 10);
                glVertex2f(length - 10, 10);
                glVertex2f(length - 10, height*0.7);
                glVertex2f(length * 0.7, height*0.7);
            glEnd();
        }
        void draw() {
            glViewport(0,0,500,500);
            glClear(GL_COLOR_BUFFER_BIT);
            drawBorder();
            drawRoof();
            drawWindow();
            drawDoor();
            glEnd();
            glFlush();
        }
};

