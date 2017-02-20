#include<stdlib.h>
#include<GL/glut.h>
#include<stdio.h>
#define dx 10
#define dy 10
GLfloat R=0.0,G=0.0,B=0.0,br=
void display()
{
GLint i,j;
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(R,G,B);
for(i=10;i<300;i+=dx)
for(j=10;j<300;j+=dx)
{
glBegin(GL_LINE_LOOP);
glVertex2i(i,j);
glVertex2i(i+dx,j);
glVertex2i(i+dx,j+dy);
glVertex2i(i,j+dy);
glEnd();
}
glFlush();
}

int main(int argc,char **argv)
{
printf("enter R,G,B COLOR VALURS");
scanf("%f%f%f",&R,&G,&B);
  glutInit(&argc,argv);
  glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
  glutInitWindowPosition(50,20);
  glutInitWindowSize(500,250);
  glutCreateWindow("ATME");
  glClearColor(0.0,0.0,0.0,0.0);
  glMatrixMode(GL_PROJECTION);
  gluOrtho2D(0.0,500.0,0.0,500.0);
  glutDisplayFunc(display);
  glutMainLoop();
  return 0;
}
