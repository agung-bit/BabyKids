class Satelit{
    public:
        void drawSatelit() {
            glBegin(GL_POLYGON); //badan satelit
            glColor3f(0,0,0);
            glVertex2f(6.46, 6.76); //titik untuk line
            glVertex2f(7.52, 8.73); //titik untuk line
            glVertex2f(9.52, 7.73);
            glVertex2f(8.52, 5.73);
            glEnd();

            glBegin(GL_POLYGON); //garis satelit
            glColor3f(0.75,0.75,0.75);
            glVertex2f(7.2, 7.38); //titik untuk line
            glVertex2f(8.6, 6.68); //titik untuk line
            glVertex2f(8.88, 7.08);
            glVertex2f(7.42, 7.81);
            glEnd();

            glBegin(GL_POLYGON); //tangkai sayap kiri
            glColor3f(0,0,0);
            glVertex2f(7.32, 6.76); //titik untuk line
            glVertex2f(7, 6); //titik untuk line
            glVertex2f(7.26, 6);
            glVertex2f(7.54, 6.67);
            glEnd();

            glBegin(GL_POLYGON); //tangkai sayap kanan
            glColor3f(0,0,0);
            glVertex2f(8.47, 8.74); //titik untuk line
            glVertex2f(8.15, 8.15); //titik untuk line
            glVertex2f(8.41, 8.04);
            glVertex2f(8.72, 8.74);
            glEnd();

            glBegin(GL_POLYGON); //sayap kiri
            glColor3f(0,0,0);
            glVertex2f(6.59, 6); //titik untuk line
            glVertex2f(5, 4); //titik untuk line
            glVertex2f(6.19, 3.99);
            glVertex2f(7.65, 6.01);
            glEnd();

            glBegin(GL_POLYGON); //sayap kanan
            glColor3f(0,0,0);
            glVertex2f(8, 8.73); //titik untuk line
            glVertex2f(9.41, 10.92); //titik untuk line
            glVertex2f(10.43, 10.92);
            glVertex2f(9.05, 8.72);
            glEnd();

            glBegin(GL_POLYGON); //garis sayap kiri
            glColor3f(1,1,1);
            glVertex2f(6.74, 5.84); //titik untuk line
            glVertex2f(5.5, 4.22); //titik untuk line
            glVertex2f(5.98, 4.22);
            glVertex2f(7.14, 5.8);
            glEnd();

            glBegin(GL_POLYGON); //garis sayap kanan
            glColor3f(1,1,1);
            glVertex2f(8.41, 9.04); //titik untuk line
            glVertex2f(9.51, 10.73); //titik untuk line
            glVertex2f(10.05, 10.75);
            glVertex2f(9, 9);
            glEnd();

            glBegin(GL_POLYGON); //radar kiri
            glColor3f(1,0,1);
            glVertex2f(6.71, 7.23); //titik untuk line
            glVertex2f(6.26, 7.12); //titik untuk line
            glVertex2f(5.5, 7.05);
            glVertex2f(4.94, 7.21);
            glVertex2f(6.16, 9.64);
            glVertex2f(6.55, 9.36);
            glVertex2f(7.01, 8.86);
            glVertex2f(7.28, 8.27);
            glEnd();

            glBegin(GL_POLYGON); //pucuk radar kiri
            glColor3f(0,0,0);
            glVertex2f(5.4, 8.12); //titik untuk line
            glVertex2f(4.57, 8.43); //titik untuk line
            glVertex2f(4.51, 8.61);
            glVertex2f(4.49, 8.76);
            glVertex2f(4.65, 8.84);
            glVertex2f(4.82, 8.86);
            glVertex2f(5.6, 8.52);
            glEnd();

            glBegin(GL_POLYGON); //radar kanan
            glColor3f(1,0,1);
            glVertex2f(8.75, 6.17); //titik untuk line
            glVertex2f(9.01, 5.77); //titik untuk line
            glVertex2f(9.39, 6.4);
            glVertex2f(9.86, 5.01);
            glVertex2f(11, 7.5);
            glVertex2f(10.41, 7.52);
            glVertex2f(9.82, 7.45);
            glVertex2f(9.36, 7.39);
            glEnd();

            glBegin(GL_POLYGON); //pucuk radar kanan
            glColor3f(0,0,0);
            glVertex2f(10.27, 5.92); //titik untuk line
            glVertex2f(10.99, 5.64); //titik untuk line
            glVertex2f(11.15, 5.64);
            glVertex2f(11.32, 5.71);
            glVertex2f(11.26, 5.9);
            glVertex2f(11.13, 6.03);
            glVertex2f(10.46, 6.32);
            glEnd();
        }

        void munyerSatelit(){

            glPushMatrix();
            glTranslatef(10, satelitWoi[0], 0);
            drawSatelit();
            glPopMatrix();

            glPushMatrix();
            glTranslatef(40, satelitWoi[1], 0);
            drawSatelit();
            glPopMatrix();

            glPushMatrix();
            glTranslatef(10, satelitWoi[2], 0);
            drawSatelit();
            glPopMatrix();

            glPushMatrix();
            glTranslatef(80, satelitWoi[2], 0);
            drawSatelit();
            glPopMatrix();

            glPushMatrix();
            glTranslatef(35, satelitWoi[3], 0);
            drawSatelit();
            glPopMatrix();

            glPushMatrix();
            glTranslatef(65, satelitWoi[4], 0);
            drawSatelit();
            glPopMatrix();

            glPushMatrix();
            glTranslatef(-10, satelitWoi[5], 0);
            drawSatelit();
            glPopMatrix();

            glPushMatrix();
            glTranslatef(30, satelitWoi[6], 0);
            drawSatelit();
            glPopMatrix();

            glPushMatrix();
            glTranslatef(60, satelitWoi[7], 0);
            drawSatelit();
            glPopMatrix();

            glPushMatrix();
            glTranslatef(90, satelitWoi[6], 0);
            drawSatelit();
            glPopMatrix();

            glPushMatrix();
            glTranslatef(-20, satelitWoi[1], 0);
            drawSatelit();
            glPopMatrix();

            glPushMatrix();
            glTranslatef(93, satelitWoi[8], 0);
            drawSatelit();
            glPopMatrix();
        }

        float satelitWoi[9] = {50, 80, 100, 125, 140, 145, 165, 50, 70};

        void moveSatelit(){
            satelitWoi[0] -= 0.05;
            satelitWoi[1] -= 0.05;
            satelitWoi[2] -= 0.05;
            satelitWoi[3] -= 0.05;
            satelitWoi[4] -= 0.05;
            satelitWoi[5] -= 0.05;
            satelitWoi[6] -= 0.05;
            satelitWoi[7] -= 0.05;
            satelitWoi[8] -= 0.05;

            for (int i = 0; i <= sizeof(satelitWoi); i++){
                if (satelitWoi[i] <= -60){
                    satelitWoi[i] = 90;
                }
            }

        }
};

