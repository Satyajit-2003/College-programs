#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//Write a menu driven program to perform the following operations in a double linked list by using suitable user defined functions for each case.

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

void display_rev(node* head){
    if (! head->next){
        printf("%d-> ", head->data);
        return;
    }
    display_rev(head->next);
    printf("%d-> ", head->data);
}

int check_if_empty(node* head){
    if (head->data)
        return 0;
    return 1;
}

void insert_node(node **head, int index){
    node *temp_node = *head;
    node *new_node = (node *)malloc(sizeof(node));
    printf("Enter data of new node: ");
    scanf("%d", &new_node->data);
    if (index == 0){
        new_node->next = *head;
        new_node->prev = NULL;
        (*head)->prev = new_node;
        *head = new_node;
        return;
    }
    for (int i = 0; i < index-1; i++){
        if (temp_node->next == NULL){
            printf("Given index is greater than list\n");
            return;        
        }
        temp_node = temp_node->next;
    }
    if (temp_node->next){
        new_node->next = temp_node->next;
        new_node->prev = temp_node;
        temp_node->next->prev = new_node;
        temp_node->next = new_node;
    }
    else{
        new_node->prev = temp_node;
        new_node->next = NULL;
        temp_node->next = new_node;
    }

}

int search(node* head, int data){
    int index = 0;
    while (head->next){
        if (head->data == data)
            return index;
        index++;
        head = head->next;
    }
    return -1;
}

void dlt_by_index(node **head, int index){
    node* temp  = *head;
    if (index == 0){
        temp = temp->next;
        temp->prev = NULL;
        free(*head);
        *head = temp;
        return ;
    }
    for (int i = 0; i < index; i++){
        if (!temp->next){
            printf("Given index larger than size of list\n");
            return;
        }
        temp = temp->next;
    }
    if (temp->next){
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        free(temp);
        return;
    }
    temp->prev->next  = NULL;
    free(temp);
}

int no_of_node(node* head){
    int count = 0;
    while (head->next){
        count ++;
        head = head->next;
    }
    count ++;
    return count;
}

void dlt_by_data(node **head, int data){
    int res = search(*head, data);
    if (res == -1){
        printf("Element not found\n");
        return;
    }
    dlt_by_index(head, res);    
}

int main(){
    srand(time(0));
    node* head = create(10);
    printf("Linked list created of length 10");
    int res, temp;
    while (1){
        printf("Enter your choice: ");
        scanf("%d", &res);
        if (res == 1){
            display(head);
        }else if (res == 2){
            display_rev(head);
            printf("\n");
        }else if (res == 4){
            int temp;
            printf("Enter index: ");
            scanf("%d", &temp);
            insert_node(&head, temp);
        }else if(res == 5){
            int temp;
            printf("Enter index: ");
            scanf("%d", &temp);
            dlt_by_index(&head, temp);  
        }
        else if(res == 6){
            int temp;
            printf("Enter data: ");
            scanf("%d", &temp);
            dlt_by_data(&head, temp);
        }else if(res == 7){
            printf("No of nodes: %d\n");
            
        }

    }
    display(head);
    printf("%d \n", search(head, 8));
    dlt_by_index(&head, 0);
    display(head);
    dlt_by_index(&head, 9);
    display(head);
    dlt_by_index(&head, 7);
    display(head);
    dlt_by_data(&head, 8);
    display(head);
    printf("%d\n", no_of_node(head));

    return 0;
}