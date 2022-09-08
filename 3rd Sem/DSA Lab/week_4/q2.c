#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//WAP to reverse the sequence elements in a double linked list.

typedef struct list{
    struct list* prev;
    int data;
    struct list* next;
} node;

node* create(int length){
    node* head = (node *)malloc(sizeof(node));
    head->prev = NULL;
    head->data = rand()%100;
    node* temp = head;
    node* next_node;
    for (int i = 1; i < length; i++){
        next_node = (node *)malloc(sizeof(node));
        temp->next = next_node;
        next_node->prev = temp;
        next_node->data = rand()%100;
        temp = next_node;
    }
    next_node->next = NULL;
    return head;
}

void display(node* head){
    while (head->next){
        printf("%d-> ", head->data);
        head = head->next;
    }
    printf("%d \n", head->data);
}

void reverse_list(node** head){
    node* temp;
    node* next_node = *head;
    while (next_node->next){
        temp = next_node->prev;
        next_node->prev = next_node->next;
        next_node->next = temp;
        next_node = next_node->prev;
    }
    temp = next_node->prev;
    next_node->prev = next_node->next;
    next_node->next = temp;
    *head = next_node;
}

int main(){
    srand(time(0));
    node* head = create(10);
    display(head);
    reverse_list(&head);
    display(head);

    return 0;
}