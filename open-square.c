/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
int i,j;
int size=4;
for(i=1;i<=4;i++){
    for(j=1;j<=4;j++){
    if(i==1 || i==4 || j==1 || j==4){
        printf("*");
    }
        else{
            printf(" ");
        }
    }
    printf("\n");
}
    return 0;
}
