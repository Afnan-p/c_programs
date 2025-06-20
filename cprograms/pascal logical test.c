/**

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

**/
#include <stdio.h>

int main()
{
    int i,j,size=4,k,l;
    for(i=1;i<=4;i++){
        
 
        for(j=1;j<=i;j++){
            
            printf(" %d", i);
              if(j !=i) {
            printf("*");
                  
              }
        }
        printf("\n");
      
    }
    for(k=3;k>=1;k--){
        for(l=1;l<=k;l++){
            printf(" %d",k);
             if(j!=k) {
            printf("*");
            }
        }
  
        printf("\n");
    }
    

    return 0;
}
