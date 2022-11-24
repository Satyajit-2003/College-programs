#include<stdio.h>
#include<stdlib.h>

//WAP to implement stack using queue and perform push and pop operations

struct node
{
    int data;
    struct node *next;
};

struct queue
{
    struct node *front;
    struct node *rear;
};

struct queue *create()
{
    struct queue *q=(struct queue *)malloc(sizeof(struct queue));
    q->front=NULL;
    q->rear=NULL;
    return q;
}

void enqueue(struct queue *q,int data)
{
    struct node *t=(struct node *)malloc(sizeof(struct node));
    t->data=data;
    t->next=NULL;
    if(q->front==NULL)
    {
        q->front=q->rear=t;
    }
    else
    {
        q->rear->next=t;
        q->rear=t;
    }
}

int dequeue(struct queue *q)
{
    int x=-1;
    struct node *t;
    if(q->front==NULL)
    {
        printf("Queue is empty"); 
    }
    else
    {
        t=q->front;
        q->front=q->front->next;
        x=t->data;
        free(t);
    }
    return x;
}

void push(struct queue *q,int data)
{
    enqueue(q,data);
    printf("Pushed %d\n",data);
}

int pop(struct queue *q)
{
    int x=-1;
    struct queue *q1=create();
    while(q->front!=q->rear)
    {
        x=dequeue(q);
        enqueue(q1,x);
    }
    x=dequeue(q); 
    while(q1->front!=NULL)
    {
        x=dequeue(q1);
        enqueue(q,x);
    }
    return x;
}

void display(struct queue *q)
{
    struct node *p=q->front;
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
}

int main()
{
    struct queue *q=create();
    push(q,1);
    push(q,2);
    push(q,3);
    push(q,4);
    push(q,5);
    display(q);
    printf("Popped: %d\n",pop(q));
    printf("Popped: %d\n",pop(q));
    display(q);

    return 0;
}

