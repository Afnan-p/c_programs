/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    char a;
    printf("enter a  value:");
    scanf("%c",&a);
    if((a>='A' && a<='Z') || (a>='a' && a<='z')){
        printf("%c is alphabet",a);
        
    }
    else if(a>='0' && a<='9'){
        printf("%c is number",a);
    }
    else{
        printf("%c is special character",a);
    }
    

    return 0;
}