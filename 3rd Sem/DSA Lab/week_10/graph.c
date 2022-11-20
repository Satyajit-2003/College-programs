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

vertex* create_graph(int no_of_vertex){
    int temp;
    vertex* graph = (vertex *) malloc(no_of_vertex * sizeof(vertex));
    for (int i = 0; i < no_of_vertex; i++){
        printf("Enter %d vertex: ", i+1);
        scanf("%d", &graph[i].data);
        graph[i].next = NULL;
    }
    for (int i = 0; i < no_of_vertex; i++){
        for (int j = 0; j < no_of_vertex; j++){
            if (i != j){
                printf("Is %d is connected to %d: ", graph[i].data, graph[j].data);
                scanf("%d", &temp);
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

int main(){
    int no_of_vertex;
    printf("Enter number of vertices: ");
    scanf("%d", &no_of_vertex);
    vertex* graph = create_graph(no_of_vertex);
    display(graph, no_of_vertex);
    
}