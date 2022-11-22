#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node* create(int* arr, int n, struct node* link_l)
{
    struct node *tmp, *q;
    link_l = (struct node *)malloc(sizeof(struct node));
    link_l->data = arr[0];
    link_l->next = NULL; // to remember, repeating the same mistake
    tmp = link_l;

    for (int i = 1; i < n; i++)
    {
        q = (struct node *)malloc(sizeof(struct node));
        q->data = arr[i];
        q->next = NULL;
        tmp->next = q;
        tmp = q;
    }
    return link_l;
}
void display(struct node *p)
{
    while (p != NULL)
    {
        printf("%d \t", p->data);
        p = p->next;
    }
}
void concatinate(struct node *p, struct node *q){
    while (p != NULL){
        p->data = (p->data * 10) + q->data;
        p = p->next;
        q = q->next;
    }
}

int main()
{
    int n;
    printf("Enter the number of elements you wanna enter\n");
    scanf("%d", &n);
    int arr[n], arr2[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d element for arr1\n", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d element for arr2\n", i);
        scanf("%d", &arr2[i]);
    }
    struct node* start  = create(arr, n, start);
    struct node* second = create(arr2, n, second);
    display(start);
    printf("\n");
    display(second);
    printf("\n");
    concatinate(start, second);
    printf("\n");
    display(start);

    
    return 0;
}