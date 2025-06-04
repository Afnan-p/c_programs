/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num;
    int list[100];
    int left,right,middle,size,i;
printf("size of array:");
scanf("%d",&size);


printf("enter the elements in array: ");
for(i=0;i<size;i++){
    scanf("%d",&list[i]);
}

printf("enter the search element:");
scanf("%d",&num);

    left=0;
    right=size-1;
    
    while(left<=right){
        middle=(left+right)/2;
        if(list[middle]==num){
            printf("element is found at %d index ",middle);
            return 0;
        }
        else if(list[middle]>num){
            right=middle-1;
        }
        else{
            left=middle+1;
            
        }
            
        }
        
            printf("element is not found\n");
    return 0;
}







