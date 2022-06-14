#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>

void init(void)
{
  glClearColor(0.0,0.0,0.0,0.0); //GLfloat red,green,blue,alpha initial value 0 alpha values used by glclear to clear the color buffers
  glMatrixMode(GL_PROJECTION);  // To specify which matrix is the current matrix & projection applies subsequent matrix to projecton matrix stack
  glLoadIdentity();
  glOrtho(0.0, 80, 0.0, 80, -1.0, 1.0);
  //gluOrtho2D(0.0,300.0,0.0,300.0); // Orthographic representation; multiply the current matrix by an orthographic matrix 2D= left right,bottom,top equivalent near=-1,far=1
}


void Draw()
{
/* glClear(GL_COLOR_BUFFER_BIT);
   glColor3f( 1 ,0, 0);
   glBegin(GL_POLYGON);
   glVertex
   glEnd();

*/
// Write your Code

   glClear(GL_COLOR_BUFFER_BIT);
   glColor3f( 0 ,0, 0);
   glBegin(GL_POLYGON);
   glVertex2d(0,0);
   glVertex2d(10,0);
   glVertex2d(10,10);
   glVertex2d(0,10);
   glEnd();


   glColor3f( 1 ,1, 1);
   glBegin(GL_POLYGON);
   glVertex2d(10,0);
   glVertex2d(20,0);
   glVertex2d(20,10);
   glVertex2d(10,10);
   glEnd();


   glColor3f( 1 ,1, 1);
   glBegin(GL_POLYGON);
   glVertex2d(30,0);
   glVertex2d(40,0);
   glVertex2d(40,10);
   glVertex2d(30,10);
   glEnd();

   glColor3f( 1 ,1, 1);
   glBegin(GL_POLYGON);
   glVertex2d(50,0);
   glVertex2d(60,0);
   glVertex2d(60,10);
   glVertex2d(50,10);
   glEnd();

   glColor3f( 1 ,1, 1);
   glBegin(GL_POLYGON);
   glVertex2d(70,0);
   glVertex2d(80,0);
   glVertex2d(80,10);
   glVertex2d(70,10);
   glEnd();

   glColor3f( 1 ,1, 1);
   glBegin(GL_POLYGON);
   glVertex2d(0,10);
   glVertex2d(10,10);
   glVertex2d(10,20);
   glVertex2d(0,20);
   glEnd();


   glColor3f( 1 ,1, 1);
   glBegin(GL_POLYGON);
   glVertex2d(20,10);
   glVertex2d(30,10);
   glVertex2d(30,20);
   glVertex2d(20,20);
   glEnd();

   glColor3f( 1 ,1, 1);
   glBegin(GL_POLYGON);
   glVertex2d(40,10);
   glVertex2d(50,10);
   glVertex2d(50,20);
   glVertex2d(40,20);
   glEnd();

    glColor3f( 1 ,1, 1);
   glBegin(GL_POLYGON);
   glVertex2d(60,10);
   glVertex2d(70,10);
   glVertex2d(70,20);
   glVertex2d(60,20);
   glEnd();


   glColor3f( 1 ,1, 1);
   glBegin(GL_POLYGON);
   glVertex2d(10,20);
   glVertex2d(20,20);
   glVertex2d(20,30);
   glVertex2d(10,30);
   glEnd();

   glColor3f( 1 ,1, 1);
   glBegin(GL_POLYGON);
   glVertex2d(30,20);
   glVertex2d(40,20);
   glVertex2d(40,30);
   glVertex2d(30,30);
   glEnd();

   glColor3f( 1 ,1, 1);
   glBegin(GL_POLYGON);
   glVertex2d(50,20);
   glVertex2d(60,20);
   glVertex2d(60,30);
   glVertex2d(50,30);
   glEnd();

   glColor3f( 1 ,1, 1);
   glBegin(GL_POLYGON);
   glVertex2d(70,20);
   glVertex2d(80,20);
   glVertex2d(80,30);
   glVertex2d(70,30);
   glEnd();


   glColor3f( 1 ,1, 1);
   glBegin(GL_POLYGON);
   glVertex2d(0,30);
   glVertex2d(10,30);
   glVertex2d(10,40);
   glVertex2d(0,40);
   glEnd();

   glColor3f( 1 ,1, 1);
   glBegin(GL_POLYGON);
   glVertex2d(20,30);
   glVertex2d(30,30);
   glVertex2d(30,40);
   glVertex2d(20,40);
   glEnd();

   glColor3f( 1 ,1, 1);
   glBegin(GL_POLYGON);
   glVertex2d(40,30);
   glVertex2d(50,30);
   glVertex2d(50,40);
   glVertex2d(40,40);
   glEnd();

   glColor3f( 1 ,1, 1);
   glBegin(GL_POLYGON);
   glVertex2d(60,30);
   glVertex2d(70,30);
   glVertex2d(70,40);
   glVertex2d(60,40);
   glEnd();

   glColor3f( 1 ,1, 1);
   glBegin(GL_POLYGON);
   glVertex2d(10,40);
   glVertex2d(20,40);
   glVertex2d(20,50);
   glVertex2d(10,50);
   glEnd();

   glColor3f( 1 ,1, 1);
   glBegin(GL_POLYGON);
   glVertex2d(30,40);
   glVertex2d(40,40);
   glVertex2d(40,50);
   glVertex2d(30,50);
   glEnd();

   glColor3f( 1 ,1, 1);
   glBegin(GL_POLYGON);
   glVertex2d(50,40);
   glVertex2d(60,40);
   glVertex2d(60,50);
   glVertex2d(50,50);
   glEnd();

   glColor3f( 1 ,1, 1);
   glBegin(GL_POLYGON);
   glVertex2d(70,40);
   glVertex2d(80,40);
   glVertex2d(80,50);
   glVertex2d(70,50);
   glEnd();

   glColor3f( 1 ,1, 1);
   glBegin(GL_POLYGON);
   glVertex2d(0,50);
   glVertex2d(10,50);
   glVertex2d(10,60);
   glVertex2d(0,60);
   glEnd();
   glColor3f( 1 ,1, 1);
   glBegin(GL_POLYGON);
   glVertex2d(20,50);
   glVertex2d(30,50);
   glVertex2d(30,60);
   glVertex2d(20,60);
   glEnd();
   glColor3f( 1 ,1, 1);
   glBegin(GL_POLYGON);
   glVertex2d(40,50);
   glVertex2d(50,50);
   glVertex2d(50,60);
   glVertex2d(40,60);
   glEnd();

   glColor3f( 1 ,1, 1);
   glBegin(GL_POLYGON);
   glVertex2d(60,50);
   glVertex2d(70,50);
   glVertex2d(70,60);
   glVertex2d(60,60);
   glEnd();

 glColor3f( 1 ,1, 1);
   glBegin(GL_POLYGON);
   glVertex2d(10,60);
   glVertex2d(20,60);
   glVertex2d(20,70);
   glVertex2d(10,70);
   glEnd();

    glColor3f( 1 ,1, 1);
   glBegin(GL_POLYGON);
   glVertex2d(30,60);
   glVertex2d(40,60);
   glVertex2d(40,70);
   glVertex2d(30,70);
   glEnd();

       glColor3f( 1 ,1, 1);
   glBegin(GL_POLYGON);
   glVertex2d(50,60);
   glVertex2d(60,60);
   glVertex2d(60,70);
   glVertex2d(50,70);
   glEnd();

    glColor3f( 1 ,1, 1);
   glBegin(GL_POLYGON);
   glVertex2d(70,60);
   glVertex2d(80,60);
   glVertex2d(80,70);
   glVertex2d(70,70);
   glEnd();

   glColor3f( 1 ,1, 1);
   glBegin(GL_POLYGON);
   glVertex2d(0,70);
   glVertex2d(10,70);
   glVertex2d(10,80);
   glVertex2d(0,80);
   glEnd();

      glColor3f( 1 ,1, 1);
   glBegin(GL_POLYGON);
   glVertex2d(20,70);
   glVertex2d(30,70);
   glVertex2d(30,80);
   glVertex2d(20,80);
   glEnd();

         glColor3f( 1 ,1, 1);
   glBegin(GL_POLYGON);
   glVertex2d(40,70);
   glVertex2d(50,70);
   glVertex2d(50,80);
   glVertex2d(40,80);
   glEnd();

            glColor3f( 1 ,1, 1);
   glBegin(GL_POLYGON);
   glVertex2d(60,70);
   glVertex2d(70,70);
   glVertex2d(70,80);
   glVertex2d(60,80);
   glEnd();
glutSwapBuffers();
}

int main(int argc,char **argv){


    glutInit(&argc,argv);
    glutInitDisplayMode ( GLUT_RGB | GLUT_DOUBLE );
    glutInitWindowPosition(0,0);
    glutInitWindowSize(500,500);
    glutCreateWindow("ChessBoard");
    init();
    glutDisplayFunc(Draw);
    glutMainLoop();
    return 0;
}