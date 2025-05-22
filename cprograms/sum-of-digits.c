/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int a, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &a);

    while(a != 0) {
        sum = sum + a % 10;
        a = a / 10;
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}







