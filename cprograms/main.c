/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int roll_no,phy,chemistry,computer_application;
    char name;
    int total;
    float percentage;
     printf("Input the Name of the Student:\n");
    scanf("%s",& name);
    
    printf("Roll number of student:\n");
    scanf("%d",& roll_no);
     printf("Input the marks of Physics, Chemistry and Computer Application:\n");
    scanf("%d%d%d",&phy,&chemistry,&computer_application);
    total=phy+chemistry+computer_application;
    percentage=total/3;
    printf("total : %d",total);
    printf("percentage of total:%f",percentage);
    
    

    return 0;
}