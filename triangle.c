#include<GL/glut.h>
void triangle()
{
glClear(GL_COLOR_BUFFER_BIT);
glBegin(GL_POLYGON);
glColor3f(0.5,0.5,0.0);
glVertex3i(10,10,0);
glVertex3i(30,60,0);
glVertex3i(50,10,0);
glEnd();

glBegin(GL_POLYGON);
glColor3f(1.0,1.0,0.0);
glVertex3i(20,35,0);
glVertex3i(40,35,0);
glVertex3i(30,10,0);
glEnd();
glFlush();
}



int main(int argc,char **argv)
{
  glutInit(&argc,argv);
  glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
  glutInitWindowPosition(50,20);
  glutInitWindowSize(500,250);
  glutCreateWindow("ATME");
  glClearColor(1.0,1.0,1.0,1.0);
  glMatrixMode(GL_PROJECTION);
  gluOrtho2D(0,300.0,0.0,150.0);
  glutDisplayFunc(triangle);
  glutMainLoop();
  return 0;
}
