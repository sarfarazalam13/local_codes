#include<grahics.h>
#include<stdio.h>
#include<string.h>

#define ScreenWidth getmaxx()
#define ScreenHeight getmaxy()
#define GroundY ScreenHeight*0.75

void Rain(int x)
{
    int i,rx,ry;
    for(i=0;i<400;i++)
    {
         rx=rand() % ScreenWidth;
         ry=rand() % ScreenHeight;
         if(ry<GroundY)line(rx-10,ry-10,rx,ry);
    }
}

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    int x=0;

    while(!kbhit())
    {
        settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
        outtextxy(200,100,"SAIF");
        arc(255,250,87,330,110);
        arc(285,233,99,320,95);
        settextstyle(TRIPLEX_SCR_FONT,HORIZ_DIR,4);
        outtextxy(255,180,"\" EID-UL-AZHA \"");
        outtextxy(285,230,"\" MUBARAK \"");
        Rain(x);
        delay(75);
        cleardevice();
    }
    getch();
    closegraph();
}

