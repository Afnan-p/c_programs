/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
    int i,n,second;
   printf("enter the size of array :");
   scanf("%d",&n);
   int arr[n];
   printf("enter %d element: ",n);
   for(i=0;i<n;i++){
       scanf("%d",&arr[i]);
   }
   int max=arr[0];
   for(i=1;i<n;i++){
       if(arr[i]>max){
           max=arr[i];
       }
   }
       printf("largest number: %d\n",max);
       
       for(i = 0; i < n; i++) {
        if(arr[i] > max) {
            second = max;
            max = arr[i];
        } else if(arr[i] > second && arr[i] < max) {
            second = arr[i];
        }}
    printf("Second largest number is: %d\n", second);
    return 0;

}