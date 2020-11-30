class Pesawat{
    public:
        void drawPesawat() {
            glBegin(GL_POLYGON); //ujung pesawat
            glColor3f(0,0,0);
            glVertex2f(4, 5); //titik untuk line
            glVertex2f(3.71517, 4.73612); //titik untuk line
            glVertex2f(3.49231, 4.40411);
            glVertex2f(3.49231, 4.40411);
            glVertex2f(3.4, 4);
            glVertex2f(4.6, 4);
            glVertex2f(4.51563, 4.38592);
            glVertex2f(4.51563, 4.38592);
            glEnd();

            glBegin(GL_POLYGON); //badan pesawat
            glColor3f(0,1,0);
            glVertex2f(3.4, 4); //titik untuk line
            glVertex2f(3.4, 2); //titik untuk line
            glVertex2f(3.6, 1);
            glVertex2f(4.4,1);
            glVertex2f(4.6, 2);
            glVertex2f(4.6, 4);
            glEnd();

            glBegin(GL_POLYGON); //sayap kanan
            glColor3f(0,0,0);
            glVertex2f(4.4, 1);
            glVertex2f(4.6, 2);
            glVertex2f(5.35695, 1.66482);
            glVertex2f(6.10274, 1.44616);
            glVertex2f(6.44848, 1.44616);
            glVertex2f(6.70779, 1.44616);
            glVertex2f(6.97945, 1.37207);
            glVertex2f(7, 1);
            glEnd();

            glVertex2f(4.4, 1);
            glVertex2f(4.6, 2);
            glVertex2f(5.35695, 1.66482);
            glVertex2f(6.10274, 1.44616);
            glVertex2f(6.44848, 1.44616);
            glVertex2f(6.70779, 1.44616);
            glVertex2f(6.97945, 1.37207);
            glVertex2f(7, 1);

            glBegin(GL_POLYGON); //badan pinggir kiri
            glColor3f(0,0,0);
            glVertex2f(3.6, 1); //titik untuk line
            glVertex2f(3.4, 2); //titik untuk line
            glVertex2f(2.64, 1.67);
            glVertex2f(1.88, 1.43);
            glVertex2f(1.53393, 1.43381);
            glVertex2f(1.28696, 1.43381);
            glVertex2f(1.0153, 1.37207);
            glVertex2f(1, 1);
            glEnd();

        }
};


