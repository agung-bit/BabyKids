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
            glVertex2f(3.6, 1);class Pesawat{
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

            glBegin(GL_POLYGON); //kaca nya
            glColor3ub(220,220,220);
            glVertex2f(3.8, 3); //titik untuk line
            glVertex2f(4.2, 3); //titik untuk line
            glVertex2f(4.2, 1);
            glVertex2f(3.8, 1);
            glEnd();

            glBegin(GL_POLYGON); //peluru 1kiri
            glColor3f(1, 0, 0);
            glVertex2f(2.8, 1.6); //titik untuk line
            glVertex2f(2.6, 1.6); //titik untuk line
            glVertex2f(2.6, 1);
            glVertex2f(2.8, 1);
            glEnd();

            glBegin(GL_POLYGON); //peluru kiri2
            glColor3f(0, 1, 0);
            glVertex2f(2.5, 1.5); //titik untuk line
            glVertex2f(2.4, 1.5); //titik untuk line
            glVertex2f(2.4, 1);
            glVertex2f(2.5, 1);
            glEnd();

            glBegin(GL_POLYGON); //peluru kiri3
            glColor3f(0, 1, 0);
            glVertex2f(2.3, 1.4); //titik untuk line
            glVertex2f(2.2, 1.4); //titik untuk line
            glVertex2f(2.2, 1);
            glVertex2f(2.3, 1);
            glEnd();

            glBegin(GL_POLYGON); //badan pinggir kiri
            glColor3f(1, 0, 0);
            glVertex2f(2.1, 1.4); //titik untuk line
            glVertex2f(2, 1.4); //titik untuk line
            glVertex2f(2, 1);
            glVertex2f(2.1, 1);
            glEnd();

            //peluru kanan iki bro
            glBegin(GL_POLYGON); //peluru kanan 1
            glColor3f(1,0,0);
            glVertex2f(5.2, 1.6); //titik untuk line
            glVertex2f(5.4, 1.6); //titik untuk line
            glVertex2f(5.4, 1);
            glVertex2f(5.2, 1);
            glEnd();

            glBegin(GL_POLYGON); //2
            glColor3f(0,1,0);
            glVertex2f(5.5, 1.5); //titik untuk line
            glVertex2f(5.6, 1.5); //titik untuk line
            glVertex2f(5.6, 1);
            glVertex2f(5.5, 1);
            glEnd();

            glBegin(GL_POLYGON); //badan pinggir kiri
            glColor3f(0,1,0);
            glVertex2f(5.7, 1.4); //titik untuk line
            glVertex2f(5.8, 1.4); //titik untuk line
            glVertex2f(5.8, 1);
            glVertex2f(5.7, 1);
            glEnd();

            glBegin(GL_POLYGON); //badan pinggir kiri
            glColor3f(1,0,0);
            glVertex2f(5.9, 1.4); //titik untuk line
            glVertex2f(6, 1.4); //titik untuk line
            glVertex2f(6, 1);
            glVertex2f(5.9, 1);
            glEnd();

            //gambar buntut
            glBegin(GL_POLYGON); //
            glColor3f(0,0,0);
            glVertex2f(4.4, 1); //titik untuk line
            glVertex2f(4.4, 0.2); //titik untuk line
            glVertex2f(3.6, 0.2);
            glVertex2f(3.6, 1);
            glEnd();

            glBegin(GL_POLYGON); //
            glColor3ub(255,140,0);
            glVertex2f(4, 0.6); //titik untuk line
            glVertex2f(4.3, 0.2); //titik untuk line
            glVertex2f(3.7, 0.2);
            glEnd();

            glBegin(GL_POLYGON); //
            glColor3ub(119,136,153);
            glVertex2f(3.85, 0.25); //titik untuk line
            glVertex2f(4.15, 0.25); //titik untuk line
            glVertex2f(4.15, 0.2);
            glVertex2f(3.85, 0.2);
            glEnd();

        }
};
