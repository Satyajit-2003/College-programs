#include<stdio.h>
#include<stdlib.h>

/*How to represent a polynomial using linked list? Write the the
program to add three polynomials*/

typedef struct st{
    int data;
    int pow;
    struct st* next;
} term;

term* create(int len){
    term* head = (term *)malloc(sizeof(term));
    term* prev= head;
    for (int i = 1; i < len; i++){
        term* temp = (term *)malloc(sizeof(term));
        prev->next = temp;
        prev = temp;
    }
    prev->next = NULL;
    return head;
}

term* add(term* pol1, term* pol2, int res_len){
    term* res = create(res_len);
    term* temp = res;
    int p1_go = 1, p2_go = 1;
    for (int i = 0; i < res_len; i++){
        if (p1_go && p2_go)
            temp->data = pol1->data + pol2->data;
        else if(p1_go)
            temp->data = pol1->data;
        else if (p2_go)
            temp->data = pol2->data;

        if (pol1->next)
            pol1 = pol1->next;
        else
            p1_go = 0;

        if (pol2->next)
            pol2 = pol2->next;
        else
            p2_go = 0;
        temp->pow = i;
        temp = temp->next;
    }
    return res;
}

void display(term* head){
    if (! head->next){
        if (head->data)
            printf("%dx^%d +", head->data, head->pow);
        return;
    }
    display(head->next);
    if (head->data)
        printf("%dx^%d +", head->data, head->pow);
}

int main(){
    int deg1, deg2, deg3, res_deg;
    term *pol1, *pol2, *pol3, *res, *temp;
    printf("Enter degree of 1st polynomial: ");
    scanf("%d", &deg1);
    deg1++;
    pol1 = create(deg1);
    temp = pol1;
    for (int i = 0; i < deg1; i++){
        printf("Enter value of degree %d: ", i);
        scanf("%d", &temp->data);
        temp->pow = i;
        temp = temp->next;
    }
    printf("Enter degree of 2nd polynomial: ");
    scanf("%d", &deg2);
    deg2++;
    pol2 = create(deg2);
    temp = pol2;
    for (int i = 0; i < deg2; i++){
        printf("Enter value of degree %d: ", i);
        scanf("%d", &temp->data);
        temp->pow = i;
        temp = temp->next;
    }
    printf("Enter degree of 3rd polynomial: ");
    scanf("%d", &deg3);
    deg3++;
    pol3 = create(deg3);
    temp = pol3;
    for (int i = 0; i < deg3; i++){
        printf("Enter value of degree %d: ", i);
        scanf("%d", &temp->data);
        temp->pow = i;
        temp = temp->next;
    }
    if (deg1 >= deg2 && deg1 >= deg3)
        res_deg = deg1;
    else if(deg2 >= deg1 && deg2 >= deg3)
        res_deg = deg2;
    else if (deg3>=deg1 && deg3>=deg2)
        res_deg = deg3;

    res = add(pol1, pol2, res_deg);
    res = add(res, pol3, res_deg);


    display(pol1);
    printf("\n");
    display(pol2);
    printf("\n");
    display(pol3);
    printf("\n");
    display(res);

    return 0;
}