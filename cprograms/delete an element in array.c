/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{   int arr[100];
    int size,i,pos;
    printf("enter the array size: ");
    scanf("%d",&size);
    printf("enter %d element",size);
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
  }

  printf("enter the position:");
  scanf("%d",&pos);

  for(i=pos;i<size-1;i++){
      arr[i]=arr[i+1];
      
  }
  size--;
  
        printf("after the insertion ");

  for(i=0;i<size;i++){
    printf("%d",arr[i]);
  }
  
    return 0;
}
