#include<stdio.h>
#include<stdlib.h>

/*Write a menu driven program to implement queue operations
such as Enqueue, Dequeue, Peek, Display of elements, isEmpty
using linked list.*/

typedef struct Qu{
    int data;
    struct Qu* next;
} node;

node *front, *rear;

int is_empty(){
    if (front->next)
        return 0;
    return 1;
}

void enqueue(){
    int data;
    printf("Enter data: ");
    scanf("%d", &data);
    node* temp = (node * )malloc(sizeof(node));
    rear->data = data;
    rear->next = temp;
    temp->next = NULL;
    rear = temp;
}

void dequeue(){
    if (! is_empty()){
        node* temp = front;
        front = front->next;
        printf("%d dequeued\n", temp->data);
        free(temp);
    }
    else
        printf("Queue is empty\n");
}

void display(node* front_){
    if (! front_->next){
        return;
    }
    display(front_->next);
    printf("%d ", front_->data);
}

void peek(){
    if (!is_empty())
        printf("%d \n", front->data);    
    else
        printf("Queue is empty\n");
}

int main(){
    int ans;
    front = (node *) malloc(sizeof(node));
    rear = front;
    front->next = NULL;
    front->data = -1;
    while (1){
        scanf("%d", &ans);
        if (ans == 7)
            break;

        switch (ans)
        {
        case 1:
            enqueue();
            break;

        case 2:
            dequeue();
            break;
        
        case 3:
            peek();
            break;
        
        case 4:
            display(front);
            printf("\n");
            break;
        
        case 5:
            if (is_empty())
                printf("True\n");
            else
                printf("False\n");

        default:
            break;
        }
    }
}

