/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>


int main()
{
    char n[200];
    int count[26]={0};
     int i,odd=0;
    
    printf("enter the string :");
    scanf("%s",n);
    
   
    for(i=0;n[i]!='\0';i++){
            count[n[i]-'a']++;
    }
    
    for (i = 0; i < 26; i++) {
        if (count[i] % 2 != 0) {
            odd++;
        }
    }

   
     if (odd > 1) {
        printf("false\n");
    } else {
        printf("true\n");
    }


    return 0;
}


