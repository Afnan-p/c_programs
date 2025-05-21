/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int x=-10;
    int y=20;
    if(x>0 && y>0){
            printf("first quadrant");

    }
    else if(x<0 && y>0){
            printf("second quadrant");

    }
    else if(x<0 && y<0){
        printf("third quadrant");
        
    }
    else{
      printf("forth quadrant");

    }

    return 0;
}
