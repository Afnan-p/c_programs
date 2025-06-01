/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int power(int number, int exponent) {
    int result = 1;
    
    for(int i = 0; i < exponent; i++) {
        result *= number;
    }

    return result;
}
int main() {
    int number, exponent;

    printf("Enter number: ");
    scanf("%d", &number);

    printf("Enter exponent: ");
    scanf("%d", &exponent);

    int result = power(number, exponent);
    printf("%d^%d = %d\n", number, exponent, result);

    return 0;
}






