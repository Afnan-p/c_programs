/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int l,b,area,peri;
    printf("enter the length=");
    scanf("%d",&l);
    printf("enter the breadth=");
    scanf("%d",&b);
    area=l*b;
    printf("area %d\n",area);
    peri=2*l+b;
    printf("peri %d\n",peri);
    

    return 0;
}
