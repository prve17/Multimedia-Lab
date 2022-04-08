/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int pfact(int,int);
int main()
{
    int n;
    scanf("%d",&n);
    pfact(n,2);
}
int pfact(int x,int i)
{
    if(x<=1)
    return 0;
    else if(x%i==0)
    {
        printf("%d\n",i);
        pfact(x/i,i);
    }
        else
        pfact(x,i+1);
}

