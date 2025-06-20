/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdbool.h>
int main()
{
    int nums[]={4,45,6,10,8};
    int target=22;
     int n = sizeof(nums) / sizeof(nums[0]);

    for(int i=0;i<n-2;i++ ){
        for(int j=i+1;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                if(nums[i]+nums[j]+nums[k]==target){
                    printf("true");
                    
                }
                    
            }
        }
    }
    
    return 0;
}