/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float height;
    printf("enter your height:");
    scanf("%f",&height);
    
    if(height<150){
        printf("short height");
    }else if(height>=150 && height<=165){
        printf("normal hight");
    }else if(height>=165 && height<=195){
        printf("tall height");
    }else{
        printf("abnormal height");
        
    }

    return 0;
}