/**

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

**/
#include <stdio.h>

int main()
{
    int i,j,size=5,k,l;
    for(i=1;i<=5;i++){

        for(j=1;j<=i;j++){

            printf(" *");

        }
        printf("\n");



    }
    for(k=1;k<=5;k++){
        for(l=1;l<=size-k;l++){
            printf(" %d",j);
        }
        printf("\n");
    }




    return 0;
}
