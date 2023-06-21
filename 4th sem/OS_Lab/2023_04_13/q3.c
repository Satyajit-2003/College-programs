#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    Node* next; 
};

struct Node* AddTwoNumbers(struct node* list1, struct Node* list2){
    int num1 = 0; 
    int num2 = 0;

    while (list1 != NULL){
        num1 *= 10;
        num1 += list1->next;
        list1 = list1->next;
    }
    
    while (list2 != NULL){
        num2 *= 10;
        num2 += list2->next;
        list2 = list2->next;
    }

    int res = num1 + num2;


    struct Node* resList = NULL;
    struct Node* temp = NULL;
    while (res != 0){
        temp = (struct Node*)malloc(sizeof(struct Node));
        temp->data = res % 10;
        temp->next = resList;
        resList = temp;
        res /= 10;
    }

    return resList;
}