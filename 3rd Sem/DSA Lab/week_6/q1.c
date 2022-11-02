#include<stdio.h>
#include<stdlib.h>

/*WAP Write a menu driven program to perform the following
operations of a stack using array by using suitable user defined
functions for each case.
a) Check if the stack is empty b) Display the contents of stack
c) Push d) Pop*/

int size, top = -1, ans;
int *stack;

int is_empty(){
    if (top == -1)
        return 1;
    return 0;
}

void push(){
    if (top == size-1){
        printf("Stack Overflow\n");
        return;
    }
    int data;
    scanf("%d", &data);
    top++;
    stack[top] = data;
}

void pop(){
    if (top == -1){
        printf("Stack Underflow\n");
        return;
    }
    int data = stack[top];
    top --;
    printf("%d popped\n", data);
}

void display(){
    if (is_empty()){
        printf("Stack is empty\n");
        return;
    }
    for(int i = top; i >= 0; i--){
        printf("%d \n", stack[i]);
    }
    printf("\n");
}

int main(){
    printf("Enter size of the stack: ");
    scanf("%d", &size);

    stack = (int *)malloc(size * sizeof(int));
    while (1){
        scanf("%d", &ans);
        if (ans == 5)
            break;

        switch (ans)
        {
        case 1:
            push();
            break;
        
        case 2:
            pop();
            break;
        
        case 3:
            display();
            break;
        
        case 4:
            if (is_empty())
                printf("True\n");
            else
                printf("False\n");

        default:
            break;
        }
    }
}