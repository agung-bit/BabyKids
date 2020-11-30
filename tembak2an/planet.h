class planet{
    public:
        void drawplanet() {
            glBegin(GL_POLYGON); //badan planet
            glColor3f(0,0,0);
            glVertex2f(25, 25); //titik untuk line
            glVertex2f(23.09, 24.14); //titik untuk line
            glVertex2f(21.16, 22.82);
            glVertex2f(19.84, 21.25);
            glVertex2f(18.87, 19.56);
            glVertex2f(18.51, 18);
            glVertex2f(18.57, 16.55);
            glVertex2f(19.17, 15.22);
            glVertex2f(20.26, 13.66);
            glVertex2f(22.01, 12.51);
            glVertex2f(24.18, 11.85);
            glVertex2f(26.59, 12.03);
            glVertex2f(29, 12.75);
            glVertex2f(31.65, 14.5);
            glVertex2f(32.67, 16.43);
            glVertex2f(33.22, 18.78);
            glVertex2f(32.67, 21.25);
            glVertex2f(30.93, 23.3);
            glVertex2f(28.52, 24.45);
            glEnd();

            glBegin(GL_POLYGON); //garis 1
            glColor3f(0.75,0.75,0.75);
            glVertex2f(20.7, 22.27); //titik untuk line
            glVertex2f(22.8, 22.03); //titik untuk line
            glVertex2f(24.78, 22.15);
            glVertex2f(26.52, 22.61);
            glVertex2f(28.99, 24.22);
            glVertex2f(30, 23.79);
            glVertex2f(28, 22);
            glVertex2f(26.49, 21.33);
            glVertex2f(24.15, 21.11);
            glVertex2f(22.27, 21.01);
            glVertex2f(19.84, 21.25);
            glEnd();

            glBegin(GL_POLYGON); //garis 2
            glColor3f(0.75,0.75,0.75);
            glVertex2f(18.87, 19.56); //titik untuk line
            glVertex2f(21.81, 19.34); //titik untuk line
            glVertex2f(23.96, 19.34);
            glVertex2f(26.57, 19.75);
            glVertex2f(30.02, 21.13);
            glVertex2f(32.02, 22.02);
            glVertex2f(32.67, 21.25);
            glVertex2f(31.45, 20.5);
            glVertex2f(29.73, 19.73);
            glVertex2f(27.75, 19.05);
            glVertex2f(25.09, 18.5);
            glVertex2f(22.51, 18.38);
            glVertex2f(20.19, 18.52);
            glVertex2f(18.69, 18.78);
            glEnd();

            glBegin(GL_POLYGON); //garis 3
            glColor3f(0.75,0.75,0.75);
            glVertex2f(20.26, 13.66); //titik untuk line
            glVertex2f(23.54, 13.93); //titik untuk line
            glVertex2f(27.25, 14.75);
            glVertex2f(30.04, 16.09);
            glVertex2f(32.84, 17.15);
            glVertex2f(32.67, 16.43);
            glVertex2f(31.17, 15.34);
            glVertex2f(29.5, 14.48);
            glVertex2f(26.81, 13.56);
            glVertex2f(24.16, 13.13);
            glVertex2f(21.31, 12.97);
            glEnd();

            glBegin(GL_POLYGON); //cincin 1
            glColor3f(1,1,1);
            glVertex2f(19.36, 20.42); //titik untuk line
            glVertex2f(17.01, 19.53); //titik untuk line
            glVertex2f(15.2, 18.19);
            glVertex2f(14.32, 16.9);
            glVertex2f(13.92, 15.73);
            glVertex2f(14.3, 15.18);
            glVertex2f(15.05, 16.21);
            glVertex2f(15.9, 17.34);
            glVertex2f(17.16, 18.37);
            glVertex2f(18.48, 19.41);
            glVertex2f(19.04, 19.85);
            glEnd();

            glBegin(GL_POLYGON); //cincin 2
            glColor3f(1,1,1);
            glVertex2f(14.3, 15.18); //titik untuk line
            glVertex2f(15.05, 16.21); //titik untuk line
            glVertex2f(15.41, 14.86);
            glVertex2f(17.65, 14.77);
            glVertex2f(22.68, 15.46);
            glVertex2f(29.05, 16.81);
            glVertex2f(35.39, 19.5);

            glVertex2f(34.99, 20.71);
            glVertex2f(32.63, 19.59);
            glVertex2f(28.74, 18.18);
            glVertex2f(23.05, 16.85);
            glVertex2f(19.17, 16.15);
            glVertex2f(15.83, 16.08);
            glEnd();

            glBegin(GL_POLYGON); //cincin 3
            glColor3f(1,1,1);
            glVertex2f(35.39, 19.5);
            glVertex2f(34.99, 20.71);
            glVertex2f(36.37, 21.99);
            glVertex2f(36.63, 23.42);
            glVertex2f(35.63, 22.89);
            glVertex2f(35.52, 22.01);
            glEnd();

            glBegin(GL_POLYGON); //cincin 4
            glColor3f(1,1,1);
            glVertex2f(36.63, 23.42);
            glVertex2f(35.63, 22.89);
            glVertex2f(35.64, 23.63);
            glVertex2f(33.56, 23.42);
            glVertex2f(31.32, 22.83);
            glVertex2f(31.72, 22.37);
            glVertex2f(33.62, 22.75);
            glVertex2f(34.86, 22.94);
            glEnd();

        }
};

