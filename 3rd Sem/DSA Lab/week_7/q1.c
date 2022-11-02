#include<stdio.h>

/*Write a menu driven program to implement queue operations such as 
Enqueue, Dequeue, Peek, Display of elements, isEmpty, isFull 
using static array.*/

int front = -1, rear = -1, size ;

int is_empty(){
    if (front == rear || front == size -1)
        return 1;
    return 0;
}

int is_full(){
    if (rear == size -1)
        return 1;
    return 0;
}

void enqueue(int* qu, int data){
    if (is_full()){
        printf("Queue full\n");
        return;
    }
    rear ++;
    qu[rear] = data;
    printf("Enqueue sucessful\n");
}

int dequeue(int* qu){
    if (is_empty()){
        printf("Queue empty\n");
        return -1;
    }
    front ++;
    return qu[front];
}

int peek(int* qu){
    if (!is_empty()){
        return qu[front+1];
    }
    return -1;
}

int display(int* qu){
    for (int i = rear; i > front; i--){
        printf("%d ", qu[i]);
    }
    printf("\n");
}

int main(){
    int ans, data;
    printf("Enter the size: ");
    scanf("%d", &size);    

    int Queue[size];

    while (1){
        // printf("1: Enqueue\n2: Dequeue\n");
        scanf("%d", &ans);
        if (ans == 7)
        break;
        switch (ans)
        {
        case 1:
            printf("Enter data to enter: ");
            scanf("%d", &data);
            enqueue(&Queue, data);
            break;
        
        case 2:
            data = dequeue(&Queue);
            if (data != -1){
                printf("%d  dequeued\n", data);
            }
            break;
        
        case 3:
            data = peek(&Queue);
            if (data != -1){
                printf("Front is: %d\n", data);
            }
            else{
                printf("Queue is empty\n");
            }
            break;
        
        case 4:
            display(&Queue);
            break;
        
        case 5:
            if (is_full())
                printf("True\n");
            else
                printf("False\n");
            break;
        
        case 6:
            if (is_empty())
                printf("True\n");
            else
                printf("False\n");
            break;
        
        default:
            break;
        }
    }
}