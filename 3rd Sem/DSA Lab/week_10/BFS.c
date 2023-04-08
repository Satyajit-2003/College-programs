#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTICES 100

// Define node structure for adjacency list
struct node {
    int vertex;
    struct node* next;
};

// Define graph structure
struct Graph {
    int num_vertices;
    struct node* adj_list[MAX_VERTICES];
};

// Create new node in adjacency list
struct node* create_node(int v) {
    struct node* new_node = (struct node*) malloc(sizeof(struct node));
    new_node->vertex = v;
    new_node->next = NULL;
    return new_node;
}

// Add edge to graph
void add_edge(struct Graph* graph, int src, int dest) {
    struct node* new_node = create_node(dest);
    new_node->next = graph->adj_list[src];
    graph->adj_list[src] = new_node;
}

// Breadth First Search algorithm
void BFS(struct Graph* graph, int start, int visited[]) {
    int queue[MAX_VERTICES];
    int front = -1, rear = -1;

    visited[start] = 1;
    queue[++rear] = start;

    while (front != rear) {
        int current_vertex = queue[++front];
        printf("%d ", current_vertex);

        struct node* adj_list = graph->adj_list[current_vertex];

        while (adj_list != NULL) {
            int adj_vertex = adj_list->vertex;
            if (!visited[adj_vertex]) {
                visited[adj_vertex] = 1;
                queue[++rear] = adj_vertex;
            }
            adj_list = adj_list->next;
        }
    }
}

// Main function
int main() {
    int num_vertices, num_edges;
    printf("Enter the number of vertices: ");
    scanf("%d", &num_vertices);

    struct Graph* graph = (struct Graph*) malloc(sizeof(struct Graph));
    graph->num_vertices = num_vertices;

    // Initialize adjacency list
    for (int i = 0; i < num_vertices; i++) {
        graph->adj_list[i] = NULL;
    }

    // Add edges to graph
    printf("Enter the number of edges: ");
    scanf("%d", &num_edges);

    for (int i = 0; i < num_edges; i++) {
        int src, dest;
        printf("Enter edge %d: ", i + 1);
        scanf("%d %d", &src, &dest);
        add_edge(graph, src, dest);
    }

    // Perform BFS
    int visited[MAX_VERTICES] = {0};
    printf("BFS of graph: ");
    for (int i = 0; i < num_vertices; i++) {
        if (!visited[i]) {
            BFS(graph, i, visited);
        }
    }
    printf("\n");

    return 0;
}
