#include<stdio.h>
#include<stdlib.h>
#include<time.h>

typedef struct list{
    int data;
    struct list* address;
} node;

node * create (int n){
    node* head = (node *) malloc(sizeof(node));
    head->data = rand()%100;
    node * temp = head;
    node *new_node;

    for (int i = 1; i < n; i++){
        new_node = (node *) malloc(sizeof(node));
        temp->address = new_node;
        new_node->data = rand()%100;
        temp = new_node;
    }
    new_node->address = NULL;
    return head;
}

void display(node* head){
    while (head->address){
        printf("%d ", head->data);
        head = head->address;
    }
    printf("%d\n", head->data);
}

void display_reverse(node* head){
    if (! head->address){
        printf("%d ", head->data);
        return;
    }
    display_reverse(head->address);
    printf("%d ", head->data);
}

int main(){
    srand(time(0));
    node* head = create(10);
    display(head);
    display_reverse(head);
}