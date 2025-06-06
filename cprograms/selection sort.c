/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int arr[]={30,40,20,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i,j,midIndex,temp;
    
    
    printf("original array: ");
    for(i=0;i<n;i++){
        printf("%d,",arr[i]);
    }
    
    printf("\n");
    
    for(i=0;i<n-1;i++){
        midIndex=i;
        
        
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[midIndex]){
            midIndex=j;
        }
        
    }
    
    
    if(midIndex!=i){
        temp=arr[i];
        arr[i]=arr[midIndex];
        arr[midIndex]=temp;
    }
    }
    
    
    printf("sorted array:");
    for(i=0;i<n;i++){
        printf("%d,",arr[i]);
    }
    printf("\n");

    return 0;
}