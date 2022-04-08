/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
        int gd=DETECT, gm, x, y,i;
        initgraph(&gd,&gm,"c:\\tc\\bgi");
         while (!kbhit()) {
      /* color 500 random pixels on screen */
          for(i=0; i<=500; i++) {
          x=rand()%getmaxx();
          y=rand()%getmaxy();
          putpixel(x,y,15);
        }
 
      /* clears screen */
        for(i=0;i<200;i++)
        {
                if(i<50)
                {
                        setcolor(7);
                        setfillstyle(1,7);
                        fillellipse(575,370,40,20);
                        floodfill(575,370,7);
                }
                else if((i>30)&&(i%4==0))
                {
                        setcolor(7);
                        arc(575,370,30,150,30+i);
                        arc(575,370,20,160,40+i);
                        arc(575,370,10,170,50+i);
                }
                setcolor(WHITE);
        }
       cleardevice(); 
}
        getch();
        closegraph();
        return 0;
    
}