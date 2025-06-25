/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int costprice,sellingprice,amount;
    printf("enter cost  price :" );
    scanf("%d",&costprice);
    printf("enter a selling price:");
    scanf("%d",&sellingprice);
    if(sellingprice > costprice){
        amount=sellingprice-costprice;
        printf("profit is  Rs %d",amount);
    }
    else if(costprice>sellingprice) {
        amount=costprice-sellingprice;
        
        printf("loss is %d",amount);
    }
    else{
        printf("equal");
    }
    

    return 0;
}