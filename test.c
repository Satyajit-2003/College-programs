#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node* prev;
    int data;
    struct node* next;
};

int main(){
    int len;
    scanf("%d", &len);

    struct node* head = (struct node*) malloc(sizeof(struct node));
    head->prev = NULL;
    head->data = 1;
    head->next = NULL;
    struct node* temp = head;

    for (int i = 0; i < len-1; i++){
        struct node* newnode = (struct node*) malloc(sizeof(struct node));
        newnode->data = i+2;
        newnode->prev = temp;
        temp->next = newnode;
        temp = newnode;
    }
    temp->next = NULL;
    struct node* tail = temp;

    struct node* t1;
    t1 = head;
    while(t1){
        printf("%d ", t1->data);
        t1 = t1->next;
    }
    printf("\n");

    t1 = tail;
    while(t1){
        printf("%d ", t1->data);
        t1 = t1->prev;
    }

    struct node* newnode = (struct node*) malloc(sizeof(struct node));
    newnode->data = 0;
    newnode->next = head;
    newnode->prev = NULL;
    head->prev = newnode;
    head = newnode;

    t1 = head;
    printf("\n");
    while(t1){
        printf("%d ", t1->data);
        t1 = t1->next;
    }
    printf("\n");

    t1 = tail;
    while(t1){
        printf("%d ", t1->data);
        t1 = t1->prev;
    }

    newnode = (struct node*) malloc(sizeof(struct node));
    newnode->data = 52;
    newnode->next = NULL;

    t1 = head;
    while(t1->next){
        t1 = t1->next;
    }

    t1->next = newnode;
    newnode->prev = t1;
    tail = newnode;

    t1 = head;
    printf("\n");
    while(t1){
        printf("%d ", t1->data);
        t1 = t1->next;
    }
    printf("\n");

    t1 = tail;
    while(t1){
        printf("%d ", t1->data);
        t1 = t1->prev;
    }

    t1 = head;
    head = head->next;
    head->prev = NULL;
    free(t1);

    t1 = head;
    printf("\n");
    while(t1){
        printf("%d ", t1->data);
        t1 = t1->next;
    }
    printf("\n");

    t1 = tail;
    while(t1){
        printf("%d ", t1->data);
        t1 = t1->prev;
    }

    t1 = tail;
    tail = tail->prev;
    tail->next = NULL;
    free(t1);

    t1 = head;
    printf("\n");
    while(t1){
        printf("%d ", t1->data);
        t1 = t1->next;
    }
    printf("\n");

    t1 = tail;
    while(t1){
        printf("%d ", t1->data);
        t1 = t1->prev;
    }
}