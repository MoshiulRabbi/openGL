#include <math.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <stdio.h>

void init()
{
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glOrtho(-15,15,-15,15,-15,5);
}
void circle(GLfloat rx,GLfloat ry,GLfloat cx,GLfloat cy)//radius_x,radius_y,certre_position_x,centre_position_y
{
    
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cx,cy);

    for(int i=0;i<=100;i++)

    {
        float angle = 2.0f * 3.1416f * i/100;

        float x = rx * cosf(angle);
        float y = ry * sinf(angle);

        glVertex2f((x+cx),(y+cy));
    }
    glEnd();



}


void myDisplay()
{
    glClear(GL_COLOR_BUFFER_BIT);

    //cloud
    glColor3f(1.0f, 1.0f, 1.0f);
    circle(5,3,0,0);

    glColor3f(1.0f, 1.0f, 1.0f);
    circle(3,5,0,0);


    
    //white moon
    glColor3f(1.0f, 1.0f, 1.0f);
    circle(3,3,7,7);   

    //black moon
    glColor3f(0.0f, 0.0f, 0.0f);
    circle(3,3,9,8); 

    glFlush();
}

int main(int argc, char** argv)
{
    
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600, 600);
    glutInitWindowPosition(200, 200);
    glutCreateWindow("CLoud Application");
    init();
    glutDisplayFunc(myDisplay);
    glutMainLoop();
    return 0;
}

