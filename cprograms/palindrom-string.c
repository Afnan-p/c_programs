/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>


int main()
{
    int i;
    char n[200], reversed[200];
    printf("enter the string :");
    scanf("%s",n);
    
    int length=strlen(n);
    printf("length is:%d\n",length);
    for(i=0;i<length;i++){
        reversed[i]=n[length-1-i];
        
    }

    printf("%d\n", strcmp(n, reversed));
    if(strcmp(n, reversed)==0){
    printf("palindrom");
    }
    else{
        printf("not palindrom");
        
    }


    return 0;
}
