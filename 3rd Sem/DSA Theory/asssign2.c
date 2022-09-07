#include<stdio.h>
#include<stdlib.h>
#include<time.h>

typedef struct st{
    int data;
    struct st* address;
} node;
int binary_search(node* , int, int);

node* create_list(int size){
    int res, data;
    int ck_unique[101] = {0};
    node* head = (node*) malloc(sizeof(node));
    head->data = rand()%100;
    node* next_node;
    node* temp = head;    
    for (int i = 1; i < size; i++){
        res = 1;
        next_node = (node*) malloc(sizeof(node));
        data = rand()%100;                   
        while (ck_unique[data] == 1)
            data = rand()%100;
        ck_unique[data] = 1;
        next_node->data = data;
        temp->address = next_node;
        temp = next_node;
    }
    next_node->address = NULL;
    return head;
}

void display_list(node* head){
    node* next_node = head;
    while (next_node->address){
        printf("%d ", next_node->data);
        next_node = next_node->address;
    }
    printf("%d \n", next_node->data);
}

void sort_list(node* head, int len){
    node* temp;
    for(int i = 0; i < len; i++){
        temp = head;
        for (int j = 0; j < len-i-1; j++){
            if (temp->data > temp->address->data){
                temp->data = temp->data + temp->address->data;
                temp->address->data = temp->data - temp->address->data;
                temp->data = temp->data - temp->address->data;
            }
            temp  = temp->address;
        }
    }
}

node* get_node(node* head, int index){
    node * temp = head;
    for (int i = 0; i < index-1; i++)
        temp = temp->address;
    return temp;
}

int binary_search(node* head, int key, int len){
    int left = 0, right = len, mid;
    while (left <= right){
        mid = (left + right)/2;
        node* mid_node = get_node(head, mid);
        if (mid_node->data == key)
            return mid-1;
        else if(key < mid_node->data)
            right = mid -1;
        else if(key > mid_node->data)
            left = mid + 1;
    }
    return -1;
}

int main(){
    int n;
    printf("Enter length: ");
    scanf("%d", &n);
    srand(time(0));
    node* head = create_list(n);
    display_list(head);
    sort_list(head, n);
    display_list(head);
    int key = rand()%100;
    int index = binary_search(head, key, n);
    if (index != -1)
        printf("%d found at %d index",key, index);
    else
        printf("Element %d not found", key);
}