class Meteor{
    public:
        void drawMeteor() {
            glBegin(GL_POLYGON); //api luar
            glColor3f(225,0,0);
            glVertex2f(5.11, 28.94); //titik untuk line
            glVertex2f(5.64, 27); //titik untuk line
            glVertex2f(6.75, 25.89);
            glVertex2f(8.69, 24.56);
            glVertex2f(11.35, 24.12);
            glVertex2f(14.51, 23.84); //L9
            glVertex2f(17.06, 24.73);
            glVertex2f(19.61, 26.45);
            glVertex2f(20.87, 28.8);
            glVertex2f(21.45, 31.46);
            glVertex2f(21.37, 34.45);
            glColor3f(225,225,0);
            glVertex2f(21.21, 38.98);
            glVertex2f(18.87, 61.45);
            glColor3f(225,225,0);
            glVertex2f(18.05, 47.82);
            glVertex2f(15.98, 70.97);
            glVertex2f(14.06, 50.8);
            glVertex2f(11.95, 71.48);
            glVertex2f(10.3, 42.82);
            glVertex2f(9.75, 62.09);
            glVertex2f(5.82, 38.43);
            glVertex2f(5.15, 32.75);
            glEnd();

            glBegin(GL_POLYGON); //badan meteor
            glColor3f(225,165,0);
            glVertex2f(12.58, 38.05); //titik untuk line
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
            glVertex2f(16, 26);
            glVertex2f(18.85, 27.66);
            glVertex2f(19.94, 29.66);
            glVertex2f(20.49, 31.97);
            glVertex2f(19.95, 34.44);
            glVertex2f(18.11, 36.55);
            glVertex2f(15.66, 37.64);
            glEnd();

            glBegin(GL_POLYGON); //pola tengah atas
            glColor3f(225,69,0);
            glVertex2f(9.96, 35.58); //titik untuk line
            glVertex2f(11.31, 36.68); //titik untuk line
            glVertex2f(12.54, 36.09);
            glVertex2f(13.15, 37);
            glVertex2f(14.95, 36.16);
            glVertex2f(15.66, 37.64);
            glVertex2f(12.58, 38.05);
            glVertex2f(10.37, 37.33);
            glEnd();

            glBegin(GL_POLYGON); //pola kanan atas
            glColor3f(225,0,0);
            glVertex2f(16.59, 35.88); //titik untuk line
            glVertex2f(15.55, 35.22); //titik untuk line
            glVertex2f(15.58, 34.2);
            glVertex2f(16.52, 33.79);
            glVertex2f(18.02, 34.41);
            glVertex2f(17.81, 35.46);
            glEnd();

            glBegin(GL_POLYGON); //pola tengah
            glColor3f(225,0,0);
            glVertex2f(11.18, 33.34); //titik untuk line
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

            glBegin(GL_POLYGON); //pola kiri atas
            glColor3f(225,0,0);
            glVertex2f(7.11, 34.44); //titik untuk line
            glVertex2f(6.15, 32.75); //titik untuk line
            glVertex2f(5.79, 31.18);
            glVertex2f(5.85, 29.74);
            glVertex2f(6.45, 28.41);
            glVertex2f(8, 30);
            glVertex2f(7.97, 30.96);
            glVertex2f(7.94, 32.67);
            glVertex2f(8.81, 32.18);
            glVertex2f(9.82, 32.91);
            glVertex2f(9.06, 33.96);
            glEnd();

            glBegin(GL_POLYGON); //pola kiri bawah
            glColor3f(225,0,0);
            glVertex2f(7.53, 26.84); //titik untuk line
            glVertex2f(9.28, 25.7); //titik untuk line
            glVertex2f(11.45, 25.04);
            glVertex2f(10.45, 26.28);
            glVertex2f(9.51, 27.44);
            glVertex2f(10.87, 27.16);
            glVertex2f(12.58, 28.55);
            glVertex2f(12, 30);
            glVertex2f(10.77, 28.1);
            glVertex2f(9.82, 28.69);
            glVertex2f(10.63, 29.07);
            glVertex2f(9.16, 30.79);
            glVertex2f(8.18, 29.15);
            glEnd();

            glBegin(GL_POLYGON); //pola tengah bawah
            glColor3f(225,0,0);
            glVertex2f(14.99, 29.77); //titik untuk line
            glVertex2f(13.1, 28.13); //titik untuk line
            glVertex2f(12.51, 27.09);
            glVertex2f(13.56, 26.25);
            glVertex2f(15.72, 27.09);
            glVertex2f(14.92, 28.1);
            glVertex2f(16.03, 28.9);
            glEnd();

            glBegin(GL_POLYGON); //pola kanan bawah
            glColor3f(225,0,0);
            glVertex2f(18,30); //titik untuk line
            glVertex2f(19.38, 31.34); //titik untuk line
            glVertex2f(19.45, 32.81);
            glVertex2f(17.36, 31.27);
            glVertex2f(17.57, 32.67);
            glVertex2f(16.14, 32.53);
            glVertex2f(15.96, 30.85);
            glVertex2f(17.61, 26.82);
            glVertex2f(18.92, 27.69);
            glVertex2f(19.95, 29.62);
            glEnd();
        }

        void munyerMeteorid(){

            glPushMatrix();
            glTranslatef(10, meteoridWoi[0], 0);
            drawMeteor();
            glPopMatrix();

            glPushMatrix();
            glTranslatef(40, meteoridWoi[1], 0);
            drawMeteor();
            glPopMatrix();

            glPushMatrix();
            glTranslatef(10, meteoridWoi[2], 0);
            drawMeteor();
            glPopMatrix();

            glPushMatrix();
            glTranslatef(80, meteoridWoi[2], 0);
            drawMeteor();
            glPopMatrix();

            glPushMatrix();
            glTranslatef(35, meteoridWoi[3], 0);
            drawMeteor();
            glPopMatrix();

            glPushMatrix();
            glTranslatef(65, meteoridWoi[4], 0);
            drawMeteor();
            glPopMatrix();

            glPushMatrix();
            glTranslatef(-10, meteoridWoi[5], 0);
            drawMeteor();
            glPopMatrix();

            glPushMatrix();
            glTranslatef(30, meteoridWoi[6], 0);
            drawMeteor();
            glPopMatrix();

            glPushMatrix();
            glTranslatef(60, meteoridWoi[7], 0);
            drawMeteor();
            glPopMatrix();

            glPushMatrix();
            glTranslatef(90, meteoridWoi[6], 0);
            drawMeteor();
            glPopMatrix();

            glPushMatrix();
            glTranslatef(-20, meteoridWoi[1], 0);
            drawMeteor();
            glPopMatrix();

            glPushMatrix();
            glTranslatef(93, meteoridWoi[8], 0);
            drawMeteor();
            glPopMatrix();
        }

        float meteoridWoi[9] = {50, 80, 100, 125, 140, 145, 165, 50, 70};

        void moveMeteorid(){
            meteoridWoi[0] -= 0.05;
            meteoridWoi[1] -= 0.05;
            meteoridWoi[2] -= 0.05;
            meteoridWoi[3] -= 0.05;
            meteoridWoi[4] -= 0.05;
            meteoridWoi[5] -= 0.05;
            meteoridWoi[6] -= 0.05;
            meteoridWoi[7] -= 0.05;
            meteoridWoi[8] -= 0.05;

            for (int i = 0; i <= sizeof(meteoridWoi); i++){
                if (meteoridWoi[i] <= -60){
                    meteoridWoi[i] = 90;
                }
            }
        }
};
