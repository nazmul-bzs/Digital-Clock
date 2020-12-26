#include "iGraphics.h"
#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#include <time.h>
int h1,h2,m1,m2,s1,s2;
int t[3] = {};
void drawdigit(int n,int x,int y)
{
	  switch(n)
	  {
	      case 0 :  iFilledRectangle(x, y, 5, 60);
                    //iFilledRectangle(x, y, 60, 5);
                    iFilledRectangle(x+60, y, 5, 65);
                    iFilledRectangle(x, y+60, 60, 5);
                    iFilledRectangle(x, y-60, 5, 60);
                    iFilledRectangle(x, y-60, 60, 5);
                    iFilledRectangle(x+60, y-60, 5, 60);
                    break;
         case 1 :    //iFilledRectangle(x, y, 5, 60);
                    //iFilledRectangle(x, y, 60, 5);
                    iFilledRectangle(x+60, y, 5, 65);
                    //iFilledRectangle(x, y+60, 60, 5);
                    //iFilledRectangle(x, y-60, 5, 60);
                    //iFilledRectangle(x, y-60, 60, 5);
                    iFilledRectangle(x+60, y-60, 5, 60);
                    break;
         case 2 :    //iFilledRectangle(x, y, 5, 60);
                    iFilledRectangle(x, y, 60, 5);
                    iFilledRectangle(x+60, y, 5, 65);
                    iFilledRectangle(x, y+60, 60, 5);
                    iFilledRectangle(x, y-60, 5, 60);
                    iFilledRectangle(x, y-60, 60, 5);
                    //iFilledRectangle(x+60, y-60, 5, 60);
                    break;
        case 3 :    //iFilledRectangle(x, y, 5, 60);
                    iFilledRectangle(x, y, 60, 5);
                    iFilledRectangle(x+60, y, 5, 65);
                    iFilledRectangle(x, y+60, 60, 5);
                    //iFilledRectangle(x, y-60, 5, 60);
                    iFilledRectangle(x, y-60, 60, 5);
                    iFilledRectangle(x+60, y-60, 5, 60);
                    break;
       case 4 :     iFilledRectangle(x, y, 5, 60);
                    iFilledRectangle(x, y, 60, 5);
                    iFilledRectangle(x+60, y, 5, 65);
                    //iFilledRectangle(x, y+60, 60, 5);
                    //iFilledRectangle(x, y-60, 5, 60);
                    //iFilledRectangle(x, y-60, 60, 5);
                    iFilledRectangle(x+60, y-60, 5, 60);
                    break;
        case 5 :    iFilledRectangle(x, y, 5, 60);
                    iFilledRectangle(x, y, 60, 5);
                    //iFilledRectangle(x+60, y, 5, 65);
                    iFilledRectangle(x, y+60, 60, 5);
                    //iFilledRectangle(x, y-60, 5, 60);
                    iFilledRectangle(x, y-60, 60, 5);
                    iFilledRectangle(x+60, y-60, 5, 65);
                    break;
        case 6 :    iFilledRectangle(x, y, 5, 60);
                    iFilledRectangle(x, y, 60, 5);
                    //iFilledRectangle(x+60, y, 5, 65);
                    iFilledRectangle(x, y+60, 60, 5);
                    iFilledRectangle(x, y-60, 5, 60);
                    iFilledRectangle(x, y-60, 60, 5);
                    iFilledRectangle(x+60, y-60, 5, 65);
                    break;
        case 7 :    //iFilledRectangle(x, y, 5, 60);
                    //iFilledRectangle(x, y, 60, 5);
                    iFilledRectangle(x+60, y, 5, 65);
                    iFilledRectangle(x, y+60, 60, 5);
                    //iFilledRectangle(x, y-60, 5, 60);
                    //iFilledRectangle(x, y-60, 60, 5);
                    iFilledRectangle(x+60, y-60, 5, 60);
                    break;
        case 8 :    iFilledRectangle(x, y, 5, 60);
                    iFilledRectangle(x, y, 60, 5);
                    iFilledRectangle(x+60, y, 5, 65);
                    iFilledRectangle(x, y+60, 60, 5);
                    iFilledRectangle(x, y-60, 5, 60);
                    iFilledRectangle(x, y-60, 60, 5);
                    iFilledRectangle(x+60, y-60, 5, 60);
                    break;
        case 9 :    iFilledRectangle(x, y, 5, 60);
                    iFilledRectangle(x, y, 60, 5);
                    iFilledRectangle(x+60, y, 5, 65);
                    iFilledRectangle(x, y+60, 60, 5);
                    //iFilledRectangle(x, y-60, 5, 60);
                    iFilledRectangle(x, y-60, 60, 5);
                    iFilledRectangle(x+60, y-60, 5, 60);
                    break;
}


	}
void gettime(int t[]) {
    time_t ctime;
    struct tm * current;
    time ( &ctime );
    current = localtime ( &ctime );
    t[0] = current->tm_hour;
    t[1] = current->tm_min;
    t[2] = current->tm_sec;

}

void iDraw() {
	iClear();
    gettime(t);
    h1=t[0]/10;h2=t[0]%10;
    m1=t[1]/10;m2=t[1]%10;
	s1=t[2]/10;s2=t[2]%10;
	iSetColor(20, 200, 200);
	//for hour
    drawdigit(h1,90,150);
    drawdigit(h2,170,150);
    //for min
    drawdigit(m1,290,150);
    drawdigit(m2,370,150);
    //for sec
    drawdigit(s1,480,150);
    drawdigit(s2,560,150);
}
void iMouse(int b, int s, int x, int y)
{

}
void iMouseMove(int x, int y)
{

}
void iKeyboard(unsigned char k)
{

}
void iSpecialKeyboard(unsigned char k)
{

}
int main()
{
    int t[3] = {};
    //printf("%d %d %d\n", t[0], t[1], t[2]);
    /*h1=t[0]/10;h2=t[0]%10;
    m1=t[1]/10;m2=t[1]%10;
	s1=t[0]/10;s2=t[0]%10;*/
	iInitialize(800, 400, "dig_clock");
    return 0;
}

