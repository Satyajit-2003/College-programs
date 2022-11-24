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

typedef struct stac{
    int data[50];
    int top;
} stack;

void push(stack* s, int data){
    if (s->top == 49){
        printf("Stack is full");
        return;
    }
    s->top++;
    s->data[s->top] = data;
}

int pop(stack* s){
    if (s->top == -1){
        printf("Stack is empty");
        return -1;
    }
    int temp = s->data[s->top];
    s->top--;
    return temp;
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

void dfs(vertex* graph, int length, int start){
    int visited[length];
    for (int i = 0; i < length; i++){
        visited[i] = 0;
    }
    int stack[length];
    int top = -1;
    stack[++top] = start;
    visited[start-1] = 1;
    while (top != -1){
        int current = stack[top--];
        printf("%d ", current);
        adj* temp = graph[current-1].next;
        while (temp){
            if (! visited[temp->data-1]){
                stack[++top] = temp->data;
                visited[temp->data-1] = 1;
            }
            temp = temp->next;
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
    dfs(graph, no_of_vertex, start);
    return 0;
}
