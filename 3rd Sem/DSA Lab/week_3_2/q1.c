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

int no_of_node(node* head){
    int count = 0;
    while (head->address){
        count ++;
        head = head->address;
    }
    count ++;
    return count;
}

void display(node* head){
    while (head->address){
        printf("%d ", head->data);
        head = head->address;
    }
    printf("%d\n", head->data);
}

void insert(node** head, int index){
    if (index == 0){
        node* new_node = (node * )malloc(sizeof(node));
        new_node->address = *head;
        new_node->data = rand()%100;
        *head = new_node;
        return;
    }
    node* temp = *head;
    node* new_node = (node *) malloc(sizeof(node));
    new_node->data =  rand()%100;
    for (int i = 0; i < index; i++)
        temp = temp->address;
    new_node->address = temp->address;
    temp->address = new_node;
}

void delete(node **head, int index){
    node* temp;
    if (index == 0){
        temp = (*head)->address;
        free(*head);
        *head = temp;
        return;
    }
    temp = *head;
    for (int i = 0; i < index; i++)
        temp = temp->address;
    node* temp2 = temp->address;
    temp->address = temp->address->address;
    free(temp2);
}

void max_min(node *head){
    int min = head->data, max = head->data;
    while (head->address){
        if (head->data > max)
            max = head->data;
        else if (head->data < min)
            min = head->data;
        head = head->address;
    }
    printf("Max: %d\nMin: %d", max, min);
}

int main(){
    srand(time(0));
    node* head = create(10);
    display(head);
    insert(&head, 0);
    display(head);
    printf("%d\n", no_of_node(head));
    insert(&head, 3);
    display(head);
    printf("%d\n", no_of_node(head));
    delete(&head, 0); 
    display(head);
    printf("%d\n", no_of_node(head));
    delete(&head, 3);
    display(head);
    max_min(head);
}

