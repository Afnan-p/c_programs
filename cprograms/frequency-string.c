/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    char str[100];
    int freq[26] = {0};  

    printf("Enter a string: ");
    scanf("%s", str);  

   
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a']++;
        }
    }

    printf("\nCharacter Frequency:\n");
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            printf("%c = %d\n", i + 'a', freq[i]);
        }
    }

    return 0;
}