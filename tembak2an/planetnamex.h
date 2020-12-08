class planetnamex{
    public:
        void drawplanetnamex() {
            glBegin(GL_POLYGON); //badan planet
            glColor3f(0,0,0);
            glVertex2f(12.28, 38.19); //titik untuk line
            glVertex2f(10.37, 37.33); //titik untuk line
            glVertex2f(8.44, 36.01);
            glVertex2f(7.11, 34.44);
            glVertex2f(6.15, 32.75);
            glVertex2f(5.79, 31.18);
            glVertex2f(5.85, 29.74);
            glVertex2f(6.45, 28.41);
            glVertex2f(7.53, 26.84);
            glVertex2f(9.28, 25.7);
            glVertex2f(11.45, 25.04);
            glVertex2f(13.86, 25.22);
            glVertex2f(16.27, 25.94);
            glVertex2f(18.92, 27.69);
            glVertex2f(19.95, 29.62);
            glVertex2f(20.49, 31.97);
            glVertex2f(19.95, 34.44);
            glVertex2f(18.2, 36.49);
            glVertex2f(15.79, 37.63);
            glEnd();

            glBegin(GL_POLYGON); //pulau 1
            glColor3f(0.75,0.75,0.75);
            glVertex2f(11.18, 33.44); //titik untuk line
            glVertex2f(11.22, 34.73); //titik untuk line
            glVertex2f(12.61, 35.32);
            glVertex2f(14.46, 34.94);
            glVertex2f(14.32, 34.31);
            glVertex2f(13.35, 34.17);
            glVertex2f(13.52, 33.3);
            glVertex2f(14.78, 32.56);
            glVertex2f(15.2, 31.2);
            glVertex2f(14.01, 30.58);
            glVertex2f(12.93, 31.55);
            glVertex2f(11.08, 30.4);
            glVertex2f(10, 31.34);
            glVertex2f(11.08, 32.18);
            glEnd();

            glBegin(GL_POLYGON); //pulau 2
            glColor3f(0.75,0.75,0.75);
            glVertex2f(9.06, 33.96); //titik untuk line
            glVertex2f(9.82, 32.91); //titik untuk line
            glVertex2f(8.81, 32.18);
            glVertex2f(7.94, 32.67);
            glVertex2f(7.97, 30.96);
            glVertex2f(8, 30);
            glVertex2f(6.45, 28.41);
            glVertex2f(5.85, 29.74);
            glVertex2f(5.79, 31.18);
            glVertex2f(6.15, 32.75);
            glVertex2f(7.11, 34.44);
            glEnd();

            glBegin(GL_POLYGON); //pulau 3
            glColor3f(0.75,0.75,0.75);
            glVertex2f(8.18, 29.15); //titik untuk line
            glVertex2f(9.16, 30.79); //titik untuk line
            glVertex2f(10.63, 29.7);
            glVertex2f(9.82, 28.69);
            glVertex2f(10.77, 28.1);
            glVertex2f(12, 30);
            glVertex2f(12.58, 28.55);
            glVertex2f(10.87, 27.16);
            glVertex2f(9.51, 27.44);
            glVertex2f(10.45, 26.28);
            glVertex2f(11.45, 25.04);
            glVertex2f(9.28, 25.7);
            glVertex2f(7.53, 26.84);
            glEnd();

            glBegin(GL_POLYGON); //pulau 4
            glColor3f(0.75,0.75,0.75);
            glVertex2f(14.99, 29.77); //titik untuk line
            glVertex2f(13.1, 28.13); //titik untuk line
            glVertex2f(12.51, 27.09);
            glVertex2f(13.56, 26.25);
            glVertex2f(15.72, 27.09);
            glVertex2f(14.92, 28.1);
            glVertex2f(16.03, 28.9);
            glEnd();

            glBegin(GL_POLYGON); //pulau 5
            glColor3f(0.75,0.75,0.75);
            glVertex2f(9.93, 35.6); //titik untuk line
            glVertex2f(11.25, 36.54); //titik untuk line
            glVertex2f(12.54, 36.09);
            glVertex2f(13.24, 36.86);
            glVertex2f(14.95, 36.16);
            glVertex2f(15.79, 37.63);
            glVertex2f(12.28, 38.19);
            glVertex2f(10.37, 37.33);
            glEnd();

            glBegin(GL_POLYGON); //pulau 6
            glColor3f(0.75,0.75,0.75);
            glVertex2f(17.61, 26.82); //titik untuk line
            glVertex2f(15.96, 30.85); //titik untuk line
            glVertex2f(16.14, 32.53);
            glVertex2f(17.57, 32.67);
            glVertex2f(17.36, 31.27);
            glVertex2f(19.45, 32.81);
            glVertex2f(19.38, 31.34);
            glVertex2f(18, 30);
            glVertex2f(19.95, 29.62);
            glVertex2f(18.92, 27.69);
            glEnd();

            glBegin(GL_POLYGON); //pulau 7
            glColor3f(0.75,0.75,0.75);
            glVertex2f(16.59, 35.88); //titik untuk line
            glVertex2f(15.55, 35.22); //titik untuk line
            glVertex2f(15.58, 34.2);
            glVertex2f(16.52, 33.79);
            glVertex2f(18.02, 34.41);
            glVertex2f(17.81, 35.46);
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


