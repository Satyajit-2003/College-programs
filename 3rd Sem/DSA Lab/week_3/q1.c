#include<stdio.h>
#include<stdlib.h>

//Menu driven program to create, display and find largest and smallest element of linked list

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

int largest(node* head){
    node *next_ele = head;
    int largest = next_ele->data;
    while (1){
        if (next_ele->data > largest)
            largest = next_ele->data;
        if (next_ele->address == NULL)
            break;
        next_ele = next_ele->address;       
    }

    return largest;
}

int smallest(node* head){
    node *next_ele = head;
    int smallest = next_ele->data;
    while (1){
        if (next_ele->data < smallest)
            smallest = next_ele->data;
        if (next_ele->address == NULL)
            break;
        next_ele = next_ele->address;       
    }

    return smallest;
}

int main(){
    int choice;
    node* head = create();
    printf("Linked list created.");
    while (1){
        printf("What do you wanna do??\n");
        printf("1 : display the list\n2 : show largest elemenr\n3 : show smallest element\n4 : insert\n5 : exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            display(head);
            break;
        case 2:
            printf("Largest element: %d\n", largest(head));
            break;
        case 3:
            printf("Smallest element: %d\n", smallest(head));
            break;
        
        case 4:
            insert_node(head);
            break;
        
        case 5:
            return 0;
        
        default:
            printf("Wrong choice.");
        }
    }
}