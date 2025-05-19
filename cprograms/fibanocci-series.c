/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a=0,b=1,fib,i;
    printf("%d\n",a);
    for(i=0;i<=10;i++){
      fib=a+b; 
      a=b;
      b=fib;
      printf("%d\n",fib);
      
    }

    return 0;
}
