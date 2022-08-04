#include<stdio.h>
#include<stdlib.h>

//WAP to create a linked list and insert elements at appropriate positions.

typedef struct list
{
    int data;
    struct list *next;
}node;

int main(){
    node *head = NULL, *temp = NULL, *newnode = NULL;
    int n,data;
    printf("Enter the number of elements in the list: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter the data %d: ", i+1);
        scanf("%d",&data);
        newnode = (node*)malloc(sizeof(node));
        newnode->data = data;
        newnode->next = NULL;
        if(head == NULL){
            head = newnode;
        }
        else{
            temp->next = newnode;
        }
        temp = newnode;
    }

    printf("List before insertion: ");
    temp = head;
    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");


    printf("Enter the index to insert the element: ");
    scanf("%d",&n);
    printf("Enter the data: ");
    scanf("%d",&data);
    newnode = (node*)malloc(sizeof(node));
    newnode->data = data;
    newnode->next = NULL;
    if(n == 1){
        newnode->next = head;
        head = newnode;
    }
    else{
        temp = head;
        for(int i=1;i<n-1;i++){
            temp = temp->next;
        }
        newnode->next = temp->next;
        temp->next = newnode;
    }
    temp = head;
    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
    return 0;
}