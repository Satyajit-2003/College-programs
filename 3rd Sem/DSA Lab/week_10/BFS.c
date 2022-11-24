#include<stdio.h>
#include<stdlib.h>
#include<time.h>

typedef struct sta{
    int data;
    struct sta* next;
} adj;

typedef struct st{
    int data;
    adj* next;
} vertex;

typedef struct queu{
    int data[50];
    int front;
    int rear;
} queue;

void enqueue(queue* q, int data){
    if (q->rear == 49){
        printf("Queue is full");
        return;
    }
    q->rear++;
    q->data[q->rear] = data;
}

int dequeue(queue* q){
    if (q->front == q->rear){
        printf("Queue is empty");
        return -1;
    }
    q->front++;
    return q->data[q->front];
}


vertex* create_graph(int no_of_vertex){
    int temp;
    vertex* graph = (vertex *) malloc(no_of_vertex * sizeof(vertex));
    for (int i = 0; i < no_of_vertex; i++){
        // printf("Enter %d vertex: ", i+1);
        // scanf("%d", &graph[i].data);
        graph[i].data = i+1;
        graph[i].next = NULL;
    }
    for (int i = 0; i < no_of_vertex; i++){
        for (int j = 0; j < no_of_vertex; j++){
            if (i != j){
                // printf("Is %d is connected to %d: ", graph[i].data, graph[j].data);
                // scanf("%d", &temp);
                temp = rand() % 2;
                if (temp){
                    if (! graph[i].next){
                        graph[i].next = (adj *)malloc(sizeof(adj));
                        graph[i].next->data = graph[j].data;
                        graph[i].next->next = NULL;
                    }
                    else{
                        adj* next_ele = graph[i].next;
                        while (next_ele->next){
                            next_ele = next_ele->next;
                        }
                        next_ele->next = (adj *)malloc(sizeof(adj));
                        next_ele->next->data = graph[j].data;
                        next_ele->next->next = NULL;                        
                    }                    
                }
            }
        }
    }
    return graph;
}

void display(vertex* graph, int length){
    printf("\t");
    for (int i = 0; i < length; i++){
        printf("%d\t", graph[i].data);
    }printf("\n");
    for (int i = 0; i < length; i++){
        printf("%d\t", graph[i].data);
        adj* temp = graph[i].next;
        for (int j = 0; j < length; j++){
            if (i == j){
                printf("-1\t");
                continue;
            }
            if (temp->data == graph[j].data){
                printf("1\t");
                if (temp->next)
                    temp = temp->next;
            }else{
                printf("0\t");
            }
        }
        printf("\n");
    }
}

void bfs(vertex* graph, int length, int start){
    int visited[length];
    for (int i = 0; i < length; i++){
        visited[i] = 0;
    }
    queue q;
    q.front = -1;
    q.rear = -1;
    enqueue(&q, start);
    visited[start] = 1;
    while (q.front != q.rear){
        int temp = dequeue(&q);
        printf("%d ", graph[temp].data);
        adj* temp_adj = graph[temp].next;
        while (temp_adj){
            if (! visited[temp_adj->data]){
                enqueue(&q, temp_adj->data);
                visited[temp_adj->data] = 1;
            }
            temp_adj = temp_adj->next;
        }
    }
}

int main(){
    int no_of_vertex;
    printf("Enter no of vertex: ");
    scanf("%d", &no_of_vertex);
    vertex* graph = create_graph(no_of_vertex);
    display(graph, no_of_vertex);
    int start;
    printf("Enter start vertex: ");
    scanf("%d", &start);
    bfs(graph, no_of_vertex, start);
    return 0;
}
