#include<stdio.h>
#include<stdlib.h>

/*WAP Write a menu driven program to perform the following
operations of a stack using linked list by using suitable user defined
functions for each case.*/

typedef struct St{
    int data;
    struct St * next;
} node;

node* top = NULL;

void push(){
    int data;
    printf("Enter data: ");
    scanf("%d", &data);

    node* temp = (node*)malloc(sizeof(node));
    temp->data = data;
    temp->next = top;
    top = temp;    
    printf("Pushed %d\n", data);
}

void pop(){
    if (! top){
        printf("Underflow\n");
        return;
    }
    int data = top->data;
    node* temp  = top;
    top = top->next;
    free(temp);
    printf("%d popped\n", data);
}

void display(){
    if (! top){
        printf("Stack is empty\n");
        return;
    }
    node* temp = top;
    while (temp){
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

int main(){
    int ans;
    while (1){
        scanf("%d", &ans);
        if (! ans)
            break;

        switch(ans){
            case 1:
                push();
                break;
            
            case 2:
                pop();
                break;

            case 3:
                display();
                break;
            
            default:
                break;
        }
    }

    return 0;
}