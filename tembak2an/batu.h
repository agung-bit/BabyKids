class Pesawat{
    public:
        void drawPesawat() {
            glBegin(GL_POLYGON); //ujung pesawat
            glColor3f(0,0,0);
            glVertex2f(22.9, 17.86); //titik untuk line
            glVertex2f(22.4, 16.72); //titik untuk line
            glVertex2f(22.21, 15.23);
            glVertex2f(22.92, 15.31);
            glVertex2f(23.54, 15.19);
            glVertex2f(23.41, 16.68);
            glEnd();

            glBegin(GL_POLYGON); //badan tengah
            glColor3f(0,1,0);
            glVertex2f(22.21, 15.23); //titik untuk line
            glVertex2f(22.02, 12.79); //titik untuk line
            glVertex2f(22.04, 8.77);
            glVertex2f(23.68, 8.75);
            glVertex2f(23.78, 12.88);
            glVertex2f(23.54, 15.19);
            glVertex2f(22.92, 15.31);
            glEnd();

            glBegin(GL_POLYGON); //badan pinggir kiri
            glColor3f(0,0,0);
            glVertex2f(22.02, 12.79); //titik untuk line
            glVertex2f(21.79, 12.02); //titik untuk line
            glVertex2f(21.58, 11.64);
            glVertex2f(21.64, 8.75);
            glVertex2f(22.04, 8.77);
            glEnd();

            glBegin(GL_POLYGON); //badan pinggir kanan
            glColor3f(0,0,0);
            glVertex2f(23.78, 12.79); //titik untuk line
            glVertex2f(24, 12); //titik untuk line
            glVertex2f(24.17, 11.65);
            glVertex2f(24.15, 8.75);
            glVertex2f(23.68, 8.75);
            glEnd();

            glBegin(GL_POLYGON); //badan sayap kiri atas
            glColor3f(1,0,0);
            glVertex2f(21.58, 11.64); //titik untuk line
            glVertex2f(20.3, 10.25); //titik untuk line
            glVertex2f(20.3, 9.81);
            glVertex2f(21.61, 10);
            glEnd();

            glBegin(GL_POLYGON); //badan sayap kanan atas
            glColor3f(1,0,0);
            glVertex2f(24.17, 11.64); //titik untuk line
            glVertex2f(25.47, 10.25); //titik untuk line
            glVertex2f(25.47, 9.81);
            glVertex2f(24.16, 10);
            glEnd();

            glBegin(GL_POLYGON); //badan bawah
            glColor3f(0,1,0);
            glVertex2f(21.61, 8.77); //titik untuk line
            glVertex2f(21.59, 5.97); //titik untuk line
            glVertex2f(24.16, 5.95);
            glVertex2f(24.15, 8.77);
            glEnd();

            glBegin(GL_POLYGON); //badan sayap kiri bawah
            glColor3f(0.75,0.75,0.75);
            glVertex2f(21.6, 10);
            glVertex2f(17.44, 6.28);
            glVertex2f(17.44, 4.99);
            glVertex2f(21.59, 6.65);
            glEnd();

            glBegin(GL_POLYGON); //badan sayap kiri bawah, model atas
            glColor3f(0,0,0);
            glVertex2f(21.6, 10);
            glVertex2f(17.83, 6.63);
            glVertex2f(17.85, 6.43);
            glVertex2f(21.6, 9.44);
            glEnd();

            glBegin(GL_POLYGON); //badan sayap kiri bawah, model bawah
            glColor3f(1,0,0);
            glVertex2f(21.59, 6.65);
            glVertex2f(17.44, 4.99);
            glVertex2f(17.46, 4.71);
            glVertex2f(21.59, 5.97);
            glEnd();

            glBegin(GL_POLYGON); //badan sayap kiri bawah, model bawah 1
            glColor3f(1.0,1.0,1.0);
            glVertex2f(21.59, 6.65);
            glVertex2f(18.77, 5.52);
            glVertex2f(18.77, 5.36);
            glVertex2f(21.59, 6.28);
            glEnd();

            glBegin(GL_POLYGON); //badan sayap kiri bawah, model bawah 2
            glColor3f(1.0,0.5,0.0);
            glVertex2f(21.59, 6.28);
            glVertex2f(18.77, 5.36);
            glVertex2f(18.81, 5.12);
            glVertex2f(21.59, 5.97);
            glEnd();

            glBegin(GL_POLYGON); //badan sayap kanan bawah
            glColor3f(0.75,0.75,0.75);
            glVertex2f(24.16, 10.02);
            glVertex2f(28.3, 6.24);
            glVertex2f(28.3, 5.02);
            glVertex2f(24.16, 6.64);
            glEnd();

            glBegin(GL_POLYGON); //badan sayap kanan bawah, model atas
            glColor3f(0,0,0);
            glVertex2f(24.16, 10.02);
            glVertex2f(27.91, 6.6);
            glVertex2f(27.89, 6.36);
            glVertex2f(24.16, 9.4);
            glEnd();

            glBegin(GL_POLYGON); //badan sayap kanan bawah, model bawah
            glColor3f(1,0,0);
            glVertex2f(24.16, 6.64);
            glVertex2f(28.3, 5.02);
            glVertex2f(28.3, 4.73);
            glVertex2f(24.16, 5.95);
            glEnd();

            glBegin(GL_POLYGON); //badan sayap kanan bawah, model bawah 1
            glColor3f(1,1,1);
            glVertex2f(24.16, 6.64);
            glVertex2f(27.01, 5.53);
            glVertex2f(26.95, 5.31);
            glVertex2f(24.16, 6.26);
            glEnd();

            glBegin(GL_POLYGON); //badan sayap kanan bawah, model bawah 2
            glColor3f(1.0,0.5,0.0);
            glVertex2f(24.16, 6.26);
            glVertex2f(26.95, 5.31);
            glVertex2f(26.95, 5.13);
            glVertex2f(24.16, 5.95);
            glEnd();

            glBegin(GL_POLYGON); //badan bawah (bokong)
            glColor3f(0,0,0);
            glVertex2f(22.03, 5.97);
            glVertex2f(22.03, 3.5);
            glVertex2f(23.68, 3.5);
            glVertex2f(23.73, 5.95);
            glEnd();
        }
};

