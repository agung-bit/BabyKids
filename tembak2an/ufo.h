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

        }
};
