#include <stdio.h>
#define size 5
char stack[size];
int top=-1;

void push(char value){
if(top==size-1){
    printf("\n stack is full");
}
    else{
        top++;
        stack[top]=value;
        printf("\n insertion success! %c pushed at position %d\n",value,top);
    }
}
    
    
void display(){
    if(top==-1){
        printf("stack is empty");
    }
        else{
            printf("stack elements are:");
            for(int i=0;i<top;i++){
                printf(" %c",stack[i]);
            }
            printf("\n");
            
        }
    }
    void pop(){
       
        if(top==-1){
            printf("stack is empty");
        }
        else{
            printf("\n deleted!! index: %c \n",stack[top]);
            top--;
            
        }
    }
int main(){
    char val;
    
    printf("you can push up to %d elements.\n ",size);
    for(int i=0;i<size;i++){
        printf("enter a character to push:");
        scanf(" %c",&val);

        push(val);
    display();
    
    }
    pop();
        display();

    
    return 0;
}
    