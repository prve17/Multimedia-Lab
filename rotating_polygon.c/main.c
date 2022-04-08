/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<math.h>
#include<stdlib.h>
int main()  
{  
    int gd=0,gm,x1,y1,x2,y2,x3,y3,i=0,angle;  
    double s,c;  
    initgraph(&gd, &gm, "c:\\tc\\bgi"); 
    setcolor(RED);  
    
    setfillstyle(1,14);
    printf("Enter coordinates of triangle: ");  
    scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2, &x3, &y3);
    for(i=0;i<5;i++)
    {
        delay(1);
    for(angle=0;angle<=360;angle++)
    {
        
    //floodfill(,14);
    setbkcolor(BLACK);  
    cleardevice();  
    line(x1,y1,x2,y2);  
    line(x2,y2, x3,y3);  
    line(x3, y3, x1, y1);  
    getch();  
    setbkcolor(BLACK);  
    setbkcolor(WHITE);  
    c = cos(angle *M_PI/180);  
    s = sin(angle *M_PI/180);  
    x1 = floor(x1 * c + y1 * s);  
    y1 = floor(-x1 * s + y1 * c);  
    x2 = floor(x2 * c + y2 * s);  
    y2 = floor(-x2 * s + y2 * c);  
    x3 = floor(x3 * c + y3 * s);  
    y3 = floor(-x3 * s + y3 * c);  
    cleardevice();  
    line(x1, y1 ,x2, y2);  
    line(x2,y2, x3,y3);  
    line(x3, y3, x1, y1);  
    }
    }
}