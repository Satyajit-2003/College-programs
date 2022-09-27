#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct list{
    char let;
    struct list* next;
} node;

node* create(int length, char* name){
    node* head = (node *) malloc(sizeof(node));
    head->let = name[0];
    node* temp = head;
    node* next_node;

    for (int i = 1; i < length; i++){
        next_node = (node *)malloc(sizeof(node));
        temp->next = next_node;
        next_node->let = name[i];
        temp = next_node;
    } 
    temp->next = NULL;
    return head;
}

void display(node* head){
    while (head->next){
        printf("%c", head->let);
        head = head->next;
    }
    printf("%c\n", head->let);
}

int is_vowel(char ch){
    // printf("%c1", ch);
    if (ch == 'A' || ch == 'E' ||ch == 'I' || ch == 'O' || ch == 'U'||
     ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        return 1;
    return 0;
}

void dlt_vowel(node **head){
    node* temp = *head;
    node* temp1;
    if (is_vowel(temp->let)){
        *head = temp->next;
        free(*head);
        *head = temp;
    }
    while(temp->next){
        if (is_vowel(temp->next->let)){
            temp1 = temp->next;
            temp->next = temp->next->next;
            free(temp1);
        }
        temp = temp->next;
    }
}

int main(){
    char name[50];
    printf("Enter your name: ");
    gets(name);
    node* head = create(strlen(name), name);
    display(head);
    dlt_vowel(&head);
    display(head);

    return 0;
}