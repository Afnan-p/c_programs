/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void greater(int a,int b,int c){
    if(a>b && a>c){
        printf(" a is greater");
    }
        else if(b>a && b>c){
            printf(" b is greater");
        }
        else 
        printf("c is grater");
        }

int main()
{
    greater(10,100,30);

    return 0;
}
