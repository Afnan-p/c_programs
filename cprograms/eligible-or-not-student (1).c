/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


int main() {
    int phy, chem, math;
    int total_all, total_mark;

    printf("Input the marks obtained in Physics : ");
    scanf("%d", &phy);

    printf("Input the marks obtained in Chemistry : ");
    scanf("%d", &chem);

    printf("Input the marks obtained in Mathematics : ");
    scanf("%d", &math);

    total_all= phy + chem + math;
    total_mark = math + phy;

    printf("Total marks of Maths, Physics and Chemistry : %d\n", total_all);
    printf("Total marks of Maths and Physics : %d\n", total_mark);

    // Check eligibility
    if ((math >= 65 && phy >= 55 && chem >= 50) && (total_all >= 190 || total_mark >= 140)) {
        printf("The candidate is eligible for admission.\n");
    } else {
        printf("The candidate is not eligible for admission.\n");
    }

    return 0;
}
