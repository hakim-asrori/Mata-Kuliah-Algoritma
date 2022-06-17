#include <stdlib.h>
#include <glut.h>

int x=0;
int zputer=0;
int zbalik=180;

void Timer(int value){
	if (zputer <= 360){
		x = 1;
	zputer += 1;
	}
	if (zputer>360){
		x = -1;
		zbalik -= 1;
	}
	if (zbalik<0){
		x = 1;
		zputer = 0;
		zbalik = 360;
	}
	glutPostRedisplay();
	glutTimerFunc(5, Timer, 0);
}

void Draw(){
	glBegin(GL_TRIANGLES);
	glClear(GL_COLOR_BUFFER_BIT);
	glVertex2d(0, 0);
	glVertex2d(-100, 200);
	glVertex2d(100, 200);
	glVertex2d(0, 0);
	glVertex2d(-100, -200);
	glVertex2d(100, -200);
	glEnd();
}

void display(){
	glClear(GL_COLOR_BUFFER_BIT);
	glPopMatrix();
	glRotatef(x, 0., 0., 1.);
	Draw();
	glPushMatrix();
	glFlush();
}

void main(int argc, char **argv){
	glutInit(&argc, argv);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(300, 300);
	glutCreateWindow("JAM ANALOG: Prak Grafkom");
	gluOrtho2D(-300., 300., -300., 300.);
	glutDisplayFunc(display);
	glutTimerFunc(60, Timer, 0);
	glutMainLoop();
}
