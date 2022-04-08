/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<graphics.h>
#include<conio.h>
#include<dos.h>
void main()
{
int gd=DETECT, gm, i, x, y;
initgraph(&gd, &gm, "C:\\TC\\BGI");
x=getmaxx()/3;
y=getmaxx()/3;
setbkcolor(BLACK);
setcolor(YELLOW);
for(i=1;i<=8;i++)
{
setfillstyle(i,i);
delay(20);
circle(x, y, i*20);
floodfill(x-2+i*20,y,YELLOW);
}
getch();
closegraph();
}
