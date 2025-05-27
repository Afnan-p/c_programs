/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int i;
   int a[]={2,4,6,8,10};
   int length= sizeof(a)/sizeof(a[0]);
   printf("%d\n",length);
   printf("----array elements----\n");
 
    for(i=0;i<5;i++){
        printf("%d\n",a[i]);
    }
    return 0;
}