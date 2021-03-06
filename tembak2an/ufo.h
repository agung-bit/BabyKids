class Ufo{
    public:
        void drawUfo() {
            glBegin(GL_POLYGON); //badan ufo
            glColor3f(0,0,0);
            glVertex2f(0, 2); //titik untuk line
            glVertex2f(0.07, 2.17); //titik untuk line
            glVertex2f(0.21, 2.27);
            glVertex2f(0.31, 2.33);
            glVertex2f(0.43, 2.39);
            glVertex2f(0.62, 2.45);
            glVertex2f(0.79, 2.49);
            glVertex2f(0.94, 2.5); //H
            glVertex2f(2.94, 2.5); //I
            glVertex2f(3.12, 2.58);
            glVertex2f(3.35, 2.45);
            glVertex2f(3.49, 2.39);
            glVertex2f(3.65, 2.3);
            glVertex2f(3.82, 2.16);
            glVertex2f(3.87, 2);
            glVertex2f(3.79, 1.86);
            glVertex2f(3.6, 1.72);
            glVertex2f(3.41, 1.62);
            glVertex2f(3.17, 1.57);
            glVertex2f(2.94, 1.5);
            glVertex2f(0.94, 1.5);
            glVertex2f(0.77, 1.53);
            glVertex2f(0.59, 1.58); //W
            glVertex2f(0.4, 1.66); //Z
            glVertex2f(0.15, 1.75);
            glVertex2f(0.06, 1.85);//B1
            glEnd();

            glBegin(GL_POLYGON); //tutup atas ufo
            glColor3f(0,1,0);
            glVertex2f(0.94, 2.5); //titik untuk line
            glVertex2f(1.06, 2.69); //titik untuk line
            glVertex2f(1.21, 2.87);
            glVertex2f(1.39, 2.97);
            glVertex2f(1.58, 3.01);
            glVertex2f(1.93, 3.01);
            glVertex2f(2.42, 3.01); //H1
            glVertex2f(2.57, 2.97);
            glVertex2f(2.71, 2.89);
            glVertex2f(2.83, 2.78);
            glVertex2f(2.88, 2.64); //L1
            glVertex2f(0.94, 2.5); //H
            glEnd();

            glBegin(GL_POLYGON); //kaca atas
            glColor3f(0, 0, 0);
            glVertex2f(1.2, 2.6); //titik untuk line D3
            glVertex2f(1.3, 2.75); //titik untuk line
            glVertex2f(1.43, 2.82);
            glVertex2f(1.66, 2.87);
            glVertex2f(1.88, 2.87);
            glVertex2f(2.13, 2.87);
            glVertex2f(2.35, 2.86); //J3
            glVertex2f(2.55, 2.81);
            glVertex2f(2.66, 2.69);
            glVertex2f(2.7, 2.6);
            glVertex2f(2.7, 2.6); //M3
            glEnd();

            glBegin(GL_POLYGON); //garis tengah
            glColor3f(0,1,0);
            glVertex2f(0, 2); //titik untuk line A
            glVertex2f(0.05, 2.04); //titik untuk line
            glVertex2f(3.83, 2.04);
            glVertex2f(3.83,1.96);
            glVertex2f(0.05, 1.96);
            glEnd();

            glBegin(GL_POLYGON); //kaki kiri
            glColor3f(0,1,0);
            glVertex2f(0.59, 1.58); //titik untuk line W
            glVertex2f(0.56, 1.51); //titik untuk line
            glVertex2f(0.51, 1.37);
            glVertex2f(0.53,1.26);
            glVertex2f(0.63, 1.19);
            glVertex2f(0.77, 1.21);
            glVertex2f(0.83, 1.3);
            glVertex2f(0.94, 1.5);
            glVertex2f(0.77, 1.53); //V
            glEnd();

            glBegin(GL_POLYGON); //kaki tengah
            glColor3f(0,1,0);
            glVertex2f(1.54, 1.5); //titik untuk line M2
            glVertex2f(1.51, 1.41); //titik untuk line
            glVertex2f(1.52, 1.27);
            glVertex2f(1.57, 1.11);
            glVertex2f(1.67, 0.99);
            glVertex2f(1.81, 0.92);
            glVertex2f(1.97, 0.91);
            glVertex2f(2.12, 0.97);
            glVertex2f(2.19, 1.1);
            glVertex2f(2.24, 1.24);
            glVertex2f(2.24, 1.24); //w2
            glVertex2f(2.23, 1.55);
            glVertex2f(2.13, 1.66);
            glVertex2f(1.94, 1.68); //B3
            glVertex2f(1.79, 1.68);
            glVertex2f(1.64, 1.65);
            glVertex2f(1.56, 1.58);
            glEnd();

            glBegin(GL_POLYGON); //kaki kanan
            glColor3f(0,1,0);
            glVertex2f(2.94, 1.5); //titik untuk line T
            glVertex2f(2.96, 1.45); //titik untuk line
            glVertex2f(2.99, 1.38);
            glVertex2f(3.03, 1.33);
            glVertex2f(3.07, 1.28);
            glVertex2f(3.09, 1.24);
            glVertex2f(3.21, 1.23); //A2
            glVertex2f(3.28, 1.25);
            glVertex2f(3.36, 1.27);
            glVertex2f(3.44, 1.33);
            glVertex2f(3.46, 1.4);
            glVertex2f(3.46, 1.49);
            glVertex2f(3.45, 1.56); //S1
            glEnd();
        }
};
