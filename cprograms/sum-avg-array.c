/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{ 
int i,n,sum=0,avg;

   printf("enter the size of array ");
   scanf("%d",&n);
   
   int arr[n];
   printf("enter %d element",n);
   for(i=0;i<n;i++){
       scanf("%d",&arr[i]);
       
   }
   
   for(i=0;i<n;i++){
       sum=arr[i]+sum;
   }
   
       printf("sum of all element: %d\n",sum);
  
    avg=sum/n;
    printf("avg : %d",avg);
    
    
   return 0;
}
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
 