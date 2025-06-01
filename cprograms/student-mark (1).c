/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char name;
        int roll_no;
            int physics,chemistry,computer_application;

    char division;
    int total;
    float percentage;

    printf("name of student:");
    scanf("%s",&name);
    printf("roll no:");
    scanf("%d\n",&roll_no);
    printf("input the mark of physics,chemistry,computer_application");
    scanf("%d%d%d",&physics,&chemistry,&computer_application);

     
    total=physics+chemistry+computer_application;
    percentage=total/3;
     printf("\nRoll No : %d\n", roll_no);
    printf("Name of Student : %c\n", name);
    printf("Marks in Physics : %d\n", physics);
    printf("Marks in Chemistry : %d\n", chemistry);
    printf("Marks in Computer Application : %d\n",computer_application);
    printf("Total Marks = %d\n", total);
    printf("Percentage = %.2f\n", percentage);
    

 if (percentage >= 60) {
        printf("Division = First\n");
    } else if (percentage >= 50) {
        printf("Division = Second\n");
    } else if (percentage >= 40) {
        printf("Division = Third\n");
    } else {
        printf("Division = Fail\n");
    }


    return 0;
}
