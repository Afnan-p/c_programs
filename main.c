/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9}; 
    int even = 0, odd = 0;
    

    for (int i = 0; i < 9; i++) {
        if (numbers[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    
    printf("Even numbers: %d\n", even);
    printf("Odd numbers: %d\n", odd);
    
    return 0;
}