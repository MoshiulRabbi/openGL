#include <GL/gl.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <stdio.h>


int radi,p , x =0 ,y;
void display(void)
{

glClear (GL_COLOR_BUFFER_BIT);
glColor3f (1.0, 1.0, 1.0);
glBegin(GL_POINTS);

p = 1-radi;

while (x <=y)
{
    if(p < 0){
        x = x +1;
        y = y;
        p = p + (2*x+1)+1;
    }
    else{
        x = x +1;
        y = y -1;
        p = p +(2*x+1)+1 -(2*y);
    }


    glVertex2i(x,y);
    glVertex2i(y,x);
    glVertex2i(-x,y);
    glVertex2i(y,-x);
    glVertex2i(-x,-y);
    glVertex2i(-y,-x);
    glVertex2i(x,-y);
    glVertex2i(-y,x);

}


glEnd();
glutSwapBuffers();
}
void init (void)
{

glClearColor (0.0, 0.0, 0.0, 0.0);   /* select clearing (background) color */
glMatrixMode(GL_PROJECTION);        /* initialize viewing values */
glLoadIdentity();
glOrtho(-100,100.0, -100, 100.0, -1, 1);

}


int main(int argc, char** argv)
{


printf("Enter Radius value: ");
scanf("%d",&radi);
y =radi;

glutInit(&argc, argv);
glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);
glutInitWindowSize (300, 300);
glutInitWindowPosition (100, 100);
glutCreateWindow ("circle");
init ();
glutDisplayFunc(display);
glutMainLoop();
return 0; /* ISO C requires main to return int. */
}