#include<stdio.h>
#include<stdlib.h>

//WAP to insert an element in a linked list

typedef struct list{
    int data;
    struct list* address;
} node;

node* create(){
    int len;
    printf("Enter number of elements in linked list: ");
    scanf("%d", &len);
    node* head = (node *) malloc(sizeof(node));
    head->data = rand()%100;
    head->address = NULL;
    node* next_node;
    node* prev_node = head;

    for (int i = 1; i < len; i++){
        next_node = (node*) malloc(sizeof(node));
        next_node->data = rand()%100;
        prev_node->address = next_node;
        prev_node = next_node;
    }
    next_node->address = NULL;
    return head;
}

void insert_node(node *head){
    int index;
    node *temp_node = head;
    node *new_node = (node *)malloc(sizeof(node));
    printf("Enter the index at which you wanna insert: ");
    scanf("%d", &index);
    printf("Enter data of new node: ");
    scanf("%d", &new_node->data);
    if (index == 0){
        new_node->address = head;
        head = new_node;
        return;
    }
    for (int i = 0; i < index-1; i++){
        if (temp_node->address == NULL){
            printf("Given index is greater than list length");
            return;        
        }
        temp_node = temp_node->address;
    }
    new_node->address = temp_node->address;
    temp_node->address = new_node;
}

void display(node *head){
    node *next_ele;
    while (1){
        printf("%d ", head->data);
        if (head->address == NULL)
            break;
        next_ele = head;
        head = next_ele->address;        
    }
    printf("\n");
}

int main(){
    node* head = create();
    display(head);
    insert_node(head);
    display(head);
}