/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main(){
int i,count=0,con=0;
char arr[100];
printf("enter the string :");
scanf("%s",arr);

int length=strlen(arr);
for(i=0;i<length;i++){
    if(arr[i]=='a' || arr[i]=='e' || arr[i]=='i' ||arr[i]=='o' || arr[i]=='u'){
        count++;
    }
    else{
        con++;
    }
}
printf("number of vowels %d\n",count);
printf("number of consonent %d",con);

    return 0;
}
