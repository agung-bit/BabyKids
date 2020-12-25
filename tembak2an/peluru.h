class Peluru{
    public:
        void drawPeluru() {
            glBegin(GL_POLYGON); //pucuk peluru
            glColor3f(0,0,0);
            glVertex2f(0.5, 2.24); //titik untuk line
            glVertex2f(1, 2.24); //titik untuk line
            glVertex2f(0.75, 3);

            glBegin(GL_POLYGON); //kotak 1
            glColor3f(0.75,0.75,0.75);
            glVertex2f(0.52, 2); //titik untuk line
            glVertex2f(1, 2); //titik untuk line
            glVertex2f(1, 2.24);
            glVertex2f(0.5, 2.24);

            glBegin(GL_POLYGON); //trapesium
            glColor3f(0.75,0.75,0.75);
            glVertex2f(0.29, 1.72); //titik untuk line
            glVertex2f(1.21, 1.72); //titik untuk line
            glVertex2f(1, 2);
            glVertex2f(0.5, 2);

            glBegin(GL_POLYGON); //kotak 2
            glColor3f(0.75,0.75,0.75);
            glVertex2f(0.29, 1.72); //titik untuk line
            glVertex2f(1.21, 1.72); //titik untuk line
            glVertex2f(1.2, 0.31);
            glVertex2f(0.29, 0.31);

            glBegin(GL_POLYGON); //kotak 3
            glColor3f(1,1,1);
            glVertex2f(0.29, 0.31); //titik untuk line
            glVertex2f(1.2, 0.31); //titik untuk line
            glVertex2f(1.2, 0.1);
            glVertex2f(0.29, 0.1);

        }
};

