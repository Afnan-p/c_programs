/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void sum();
void main()
{
    printf("\ncalculate sum of two numberd:");
    sum();
    
}
void sum()
{
    int a,b;
    printf("\nenter two numbers:");
    scanf("%d%d",&a,&b);
    printf("the sum is%d",a+b);
}