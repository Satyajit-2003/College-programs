#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//WAP to remove the duplicates in a sorted double linked list.

typedef struct list{
    struct list* prev;
    int data;
    struct list* next;
} node;

node* create(int length){
    node* head = (node *)malloc(sizeof(node));
    head->prev = NULL;
    head->data = rand()%5;
    node* temp = head;
    node* next_node;
    for (int i = 1; i < length; i++){
        next_node = (node *)malloc(sizeof(node));
        temp->next = next_node;
        next_node->prev = temp;
        next_node->data = rand()%5;
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

void sort(node* head, int length){
    node* temp;
    for (int i = 0; i < length; i++){
        temp = head;
        for (int j = 0; j < length-i-1; j++){
            if (temp->data > temp->next->data){
                temp->data = temp->next->data + temp->data;
                temp->next->data = temp->data - temp->next->data;
                temp->data = temp->data - temp->next->data;
            }
            temp = temp->next;
        } 
    }
}

void remove_dupli(node* head){
    node* temp;
    while (head->next){
        if (head->data == head->next->data){
            temp = head->next;
            if (temp->next){
                temp->next->prev = head;
            }
            head->next = temp->next;
            free(temp);
        }
        else    
            head = head->next;
    }
}

int main(){
    srand(time(0));
    node* head = create(10);
    display(head);
    sort(head, 10);
    display(head);
    remove_dupli(head);
    display(head);

    return 0;
}