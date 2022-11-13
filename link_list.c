#include<stdio.h>
#include<stdlib.h>

typedef struct ele{
    int data;
    struct ele * address
} node;

void create_node(node *head){
    node *new_node = (node *)malloc(sizeof(node));
    new_node->address = NULL;
    printf("Enter data of new node: ");
    scanf("%d", &new_node->data);
    while (1){
        if (head->address == NULL){
            head->address = new_node;
            break;
        }      
        node *next_ele = head->address;
        head = next_ele;
    }
}

void insert_node(node *head, int index){
    node *temp_node = head;
    node *new_node = (node *)malloc(sizeof(node));
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

void dlt_node(node *head, int index){
    if (index == 0){
        node *temp_node = head->address;
        free(head);
        head = temp_node;
    }
    node *temp_node = head;
    for (int i = 0; i < index-1; i++){
        if (temp_node->address == NULL){
            printf("Given index is greater than list length");
            break;        
        }
        temp_node = temp_node->address;
    }
    node *dl_node = temp_node->address;
    temp_node->address = dl_node->address;
    free(dl_node);
}

void dlt_node_by_data(node *head){
    int index = 0, data;
    node *next_node = head;
    printf("Enter the data to be deleted: ");
    scanf("%d", &data);
    while (next_node->address != NULL){
        if (next_node->data == data){
            dlt_node(head, index);
            return;
        }
        next_node = next_node->address;
        index++;
    }
    printf("The specified data is not found");
}

void print_list(node *head){
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

void print_using_recursion(node* next){
    if (!next->address){
        printf("%d", next->data);
        return;
    }
    printf("%d-> ",next->data);
    print_using_recursion(next->address);
}

void print_reverse_using_recursion(node* next){
        if (!next->address){
            printf("%d", next->data);
            return;
        }
    print_reverse_using_recursion(next->address);
    printf("%d-> ",next->data);
}

int main(){
    node *head = (node *)malloc(sizeof(node));
    head->data = 69;
    head->address = NULL;
    create_node(head);
    create_node(head);
    print_list(head);
    print_reverse_using_recursion(head);
    printf("\n");
    insert_node(head, 0);
    print_list(head);
    dlt_node(head, 1);
    print_list(head);
    dlt_node_by_data(head);
    print_using_recursion(head);
    
    return 0;
}