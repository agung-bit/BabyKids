#include <GL/gl.h> //Import library yang akan digunakan
#include <GL/glu.h>
#include <GL/glut.h> // library grafik dari opengl
#include "pesawat.h"

Pesawat pesawat;

float x;
float y;


void displayMe(void) {
    glClearColor(0,1,1,1);
    glClear(GL_COLOR_BUFFER_BIT);

    glPushMatrix();
    glTranslatef(x, y, 0);
    pesawat.drawPesawat();
    glPopMatrix();

    glFlush();
    glutSwapBuffers();
}

void myinit() {
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glMatrixMode(GL_MODELVIEW);
	glClearColor(1.0, 1.0, 1.0, 1.0); //membersihkan windows
	glColor3f(0.0, 0.0, 0.0); //spesifikasi warna
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
}


int main(int argc, char** argv){ // atur display
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
	glutInitWindowSize(500, 500); // ukuran display
	glutInitWindowPosition(0, 0); // posisi program
	glutCreateWindow("bby"); // nama window
	glutDisplayFunc(displayMe); //
	myinit();
	gluOrtho2D(0, 50, 0, 50); //ukuran sumbu X dan Y
	glutMainLoop();
	return 0;
}
