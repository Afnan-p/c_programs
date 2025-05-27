/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int arr[] = {5, 10, 15, 20, 25};  
    int n, i, found = 0;
    
    printf("Array: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    
    printf("\nEnter number to search: ");
    scanf("%d", &n);
    

    for (i = 0; i < 5; i++) {
        if (arr[i] == n) {
            printf("%d found at position %d\n", n, i+1);
             found = 1;
            break;
        }
    }
    
    if (!found) {
        printf("%d not found in the array\n", n);
    }
    
    return 0;
}
      