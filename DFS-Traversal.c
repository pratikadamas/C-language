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

// Recursive function to perform DFS traversal
void DFS(struct Graph* graph, int node, bool* visited) {
    visited[node] = true;
    printf("%d ", node);

    for (int i = 0; i < graph->V; i++) {
        if (graph->adjMatrix[node][i] == 1 && !visited[i]) {
            DFS(graph, i, visited);
        }
    }
}

int main() {
    struct Graph* graph = createGraph(6);

    addEdge(graph, 0, 1);
    addEdge(graph, 0, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 1, 4);
    addEdge(graph, 2, 5);

    bool* visited = (bool*)malloc(graph->V * sizeof(bool));
    for (int i = 0; i < graph->V; i++) {
        visited[i] = false;
    }

    printf("DFS starting from vertex 0:\n");
    DFS(graph, 0, visited);

    free(visited);
    return 0;
}