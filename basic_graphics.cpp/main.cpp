/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<graphics.h>
#include<conio.h>
#include<stdio.h>
void main()
{
int gd=DETECT,gm;
initgraph (&gd,&gm);
setbkcolor(BLACK);
printf("\t\t\t\n\nLINE");
line(50,40,190,40);

printf("\t\t\n\n\n\nRECTANGLE");
rectangle(125,115,215,165);
printf("\t\t\t\n\n\n\n\n\n\nARC");
arc(120,200,180,0,30);
printf("\t\n\n\n\nCIRCLE");
circle(120,270,30);
printf("\t\n\n\n\nECLIPSE");
ellipse(120,350,0,360,30,20);
getch();
}

