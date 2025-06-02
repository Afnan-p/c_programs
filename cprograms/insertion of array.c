/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS  
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{   int arr[100];
    int size,i,pos,value;
    printf("enter the array size: ");
    scanf("%d",&size);
    printf("enter %d element",size);
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
  }
  printf("enter the value: ");
  scanf("%d",&value);
  printf("enter the position:");
  scanf("%d",&pos);
  if(pos<0  || pos>size){
      printf("invalid\n");
      return 1;
  }
  for(i=size;i>pos;i--){
      arr[i]=arr[i-1];
      
  }
  arr[pos]=value;
  size++;
  
        printf("after the insertion ");

  for(i=0;i<size;i++){
    printf("%d",arr[i]);
  }
  
  
      
  
    
        return 0;
}