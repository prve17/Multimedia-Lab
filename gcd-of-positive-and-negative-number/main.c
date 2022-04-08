/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    a=(a>0)?a:-a;
    b=(b>0)?b:-b;
        while(a!=b)
    {
        if(a > b)
            a -= b;
        else
            b -= a;
    }
    printf("GCD = %d",a);
}
