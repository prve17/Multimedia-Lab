/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#include<dos.h>
void main()

{
int gd=DETECT,gm,i=0,x,xx,y,yy,r;
//Initializes the graphics system
initgraph(&gd,&gm,"c:\\tc\\bgi");
x=getmaxx();
y=getmaxy();
while(!kbhit())
{
i++;
// setfillstyle(random(i),random(30));

circle(xx=random(x),yy=random(y),random(30));
setfillstyle(random(i),random(30));
floodfill(xx,yy,getmaxcolor());
delay(200);
}
getch();
}
