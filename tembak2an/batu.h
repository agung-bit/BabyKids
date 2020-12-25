class Batu{
    public:
        void drawBatu() {
            glBegin(GL_POLYGON);
            glColor3ub(255,69,0);
            glVertex2f(1.84461, 0.30495); //titik untuk line
            glVertex2f(1.62115, 0.42983); //titik untuk line
            glVertex2f(1.35169, 0.64014);
            glVertex2f(1.29911, 0.8636);
            glVertex2f(1.50942, 1.30395);
            glVertex2f(1.80518, 1.35653);
            glVertex2f(2.02864, 1.29738);
            glVertex2f(2.22581, 1.00819);
            glVertex2f(2.26524, 0.77816);
            glVertex2f(2.23895, 0.627);
            glVertex2f(2.13379, 0.59414);
            glVertex2f(2.02864, 0.41011);
            glEnd();

            glBegin(GL_POLYGON);
            glColor3f(255,225,0);
            glVertex2f(1.51906, 0.65175); //titik untuk line
            glVertex2f(1.5147, 0.59063); //titik untuk line
            glVertex2f(1.53871, 0.56334);
            glVertex2f(1.56927, 0.56989);
            glVertex2f(1.58455, 0.607);
            glVertex2f(1.56818, 0.64193);
            glEnd();

            glBegin(GL_POLYGON);
            glColor3f(255,182,193);
            glVertex2f(1.93522, 0.73174); //titik untuk line
            glVertex2f(1.84556, 0.62793); //titik untuk line
            glVertex2f(1.94308, 0.60433);
            glVertex2f(2.0233, 0.66096);
            glVertex2f(1.99656, 0.7223);
            glEnd();

            glBegin(GL_POLYGON);
            glColor3f(255,182,193);
            glVertex2f(1.73954, 0.54281); //titik untuk line
            glVertex2f(1.70473, 0.48312); //titik untuk line
            glVertex2f(1.74949, 0.48312);
            glVertex2f(1.82161, 0.51297);
            glEnd();

            glBegin(GL_POLYGON);
            glColor3f(255,69,0);
            glVertex2f(2.03431, 0.93936);
            glVertex2f(2, 0.9); //titik untuk line
            glVertex2f(2.01229, 0.82296);
            glVertex2f(2.07206, 0.80724);
            glVertex2f(2.06891, 0.86858);
            glVertex2f(2.08149, 0.92992);
            glEnd();

            glBegin(GL_POLYGON);
            glColor3f(255,69,0);
            glVertex2f(1.5011, 1.0526); //titik untuk line
            glVertex2f(1.45863, 1.0007); //titik untuk line
            glVertex2f(1.49638, 0.96924);
            glVertex2f(1.54514, 0.97553);
            glVertex2f(1.54042, 1.05575);
            glEnd();

        }
};

