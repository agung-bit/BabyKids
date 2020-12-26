#include "windows.h"
#include "bacrond.h"
#include "printer.h"

Printer printer;
Bacrond bacrond;

class menu{
    public:
    void menupage(void){
        glPushMatrix();
        bacrond.bg_1();
        glPopMatrix();
        glPushMatrix();
        printer.drawText(0,0,"Click mouse to Start Game");
        glPopMatrix();
        glFlush();
    }
};
