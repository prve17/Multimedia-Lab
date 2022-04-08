#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
  
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "c:\\tc\\bgi");
  
    // line for x1, y1, x2, y2
    //setcolor(RED);
     setfillstyle(1,15);
     //circle(200,200,100);
     //floodfill(202,202,15);
     circle(380,90,3);
     floodfill(380,90,15);
    line(380,90,340,80);
    line(340,80,290,130);
    line(290,130,290,180);
    line(290,180,340,210);
    line(340,210,380,290);
    line(380,290,200,310);
    line(200,310,80,350);
    line(80,350,110,220);
    line(110,220,290,180);
    getch();
    closegraph();
    return 0;
}

