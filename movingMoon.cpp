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

float p=-10.0;
void myDisplay()
{

  glClear(GL_COLOR_BUFFER_BIT);
 
      if(p<=10) //moving limit with the display measurement
       p=p+.0005; // changing the object position for redisplaying
 
     else
       p=-10; // For backing the object continuously
 
   glutPostRedisplay(); // To redraw the object in the display
 
 

    //cloud
    glColor3f(1.0f, 1.0f, 1.0f);
    circle(5,3,0,0);

    glColor3f(1.0f, 1.0f, 1.0f);
    circle(3,5,0,0);
    

//move moon
  glColor3f(1.0f, 1.0f, 1.0f);
    circle(3,3,p+2,7); 
  glEnd();
    

  glColor3f(0.0f, 0.0f, 0.0f);
    circle(3,3,p+3,9); 
  glEnd();


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

