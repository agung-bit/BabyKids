class Bacrond{
    public:
        void bg_1(){
        glPushMatrix();
        glEnable (GL_BLEND);
        glBlendFunc (GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
        glColor4f(0.0f, 1.0f, 1.0f, 1.0f);
        glBegin(GL_POLYGON);
        glVertex2f(0,100);
        glVertex2f(0,100);
        glVertex2f(100,100);
        glVertex2f(100,0);
        glEnd();
        glPopMatrix();
    }
};
