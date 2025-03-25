//
// Created by Pratik Giri on 23-02-2025.
//
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Structure for the graph
struct Graph {
    int V;
    int **adjMatrix;
};

// Function to create a graph with V vertices
struct Graph* createGraph(int V) {
    struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));
    graph->V = V;
    graph->adjMatrix = (int**)malloc(V * sizeof(int*));

    for (int i = 0; i < V; i++) {
        graph->adjMatrix[i] = (int*)malloc(V * sizeof(int));
        for (int j = 0; j < V; j++) {
            graph->adjMatrix[i][j] = 0; // Initialize all edges as 0 (no edges)
        }
    }
    return graph;
}

// Function to add an edge to the graph (undirected graph)
void addEdge(struct Graph* graph, int src, int dest) {
    graph->adjMatrix[src][dest] = 1;
    graph->adjMatrix[dest][src] = 1;
}

// Function to perform BFS traversal
void BFS(struct Graph* graph, int start) {
    bool* visited = (bool*)malloc(graph->V * sizeof(bool));
    for (int i = 0; i < graph->V; i++) {
        visited[i] = false;
    }

    int* queue = (int*)malloc(graph->V * sizeof(int));
    int front = 0, rear = 0;

    visited[start] = true;
    queue[rear++] = start;

    while (front != rear) {
        int node = queue[front++];
        printf("%d ", node);

        for (int i = 0; i < graph->V; i++) {
            if (graph->adjMatrix[node][i] == 1 && !visited[i]) {
                visited[i] = true;
                queue[rear++] = i;
            }
        }
    }

    free(visited);
    free(queue);
}

int main() {
    struct Graph* graph = createGraph(6);

    addEdge(graph, 0, 1);
    addEdge(graph, 0, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 1, 4);
    addEdge(graph, 2, 5);

    printf("BFS starting from vertex 0:\n");
    BFS(graph, 0);

    return 0;
}