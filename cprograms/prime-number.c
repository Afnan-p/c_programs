/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,i;
    int isprime=1;
    printf("enter the number:");
    scanf("%d",&a);
    for(i=2;i<=a/2;i++){
        if(a%i==0){
        isprime=0;
        }  
        
 }

 if(isprime){
     printf("prime");
 }
 else{
     printf("not prime");
 }

    return 0;
}
