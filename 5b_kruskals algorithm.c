#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_EDGES 100

typedef struct Edge {
    int source;
    int destination;
    int weight;
} Edge;

typedef struct Graph {
    int vertices;
    int edges;
    Edge edge[MAX_EDGES];
} Graph;

typedef struct Subset {
    int parent;
    int rank;
} Subset;

Graph* createGraph(int vertices, int edges) {
    Graph* graph = (Graph*)malloc(sizeof(Graph));
    graph->vertices = vertices;
    graph->edges = edges;
    return graph;
}

int find(Subset subsets[], int i) {
    if (subsets[i].parent != i)
        subsets[i].parent = find(subsets, subsets[i].parent);
    return subsets[i].parent;
}

void unionSet(Subset subsets[], int x, int y) {
    int xroot = find(subsets, x);
    int yroot = find(subsets, y);

    if (subsets[xroot].rank < subsets[yroot].rank)
        subsets[xroot].parent = yroot;
    else if (subsets[xroot].rank > subsets[yroot].rank)
        subsets[yroot].parent = xroot;
    else {
        subsets[yroot].parent = xroot;
        subsets[xroot].rank++;
    }
}

int compareEdges(const void* a, const void* b) {
    Edge* edge1 = (Edge*)a;
    Edge* edge2 = (Edge*)b;
    return edge1->weight - edge2->weight;
}

void kruskalMST(Graph* graph) {
    int vertices = graph->vertices;
    Edge result[vertices];
    int e = 0; // index variable for result[] array
    int i = 0; // index variable for sorted edges

    qsort(graph->edge, graph->edges, sizeof(Edge), compareEdges);

    Subset* subsets = (Subset*)malloc(vertices * sizeof(Subset));

    for (int v = 0; v < vertices; v++) {
        subsets[v].parent = v;
        subsets[v].rank = 0;
    }

    while (e < vertices - 1 && i < graph->edges) {
        Edge nextEdge = graph->edge[i++];

        int x = find(subsets, nextEdge.source);
        int y = find(subsets, nextEdge.destination);

        if (x != y) {
            result[e++] = nextEdge;
            unionSet(subsets, x, y);
        }
    }

    printf("Edges in MST:\n");
    for (int j = 0; j < e; j++) {
        printf("%d -- %d : %d\n", result[j].source, result[j].destination, result[j].weight);
    }

    free(subsets);
}

int main() {
    int vertices, edges;

    printf("Enter the number of vertices: ");
    scanf("%d", &vertices);

    printf("Enter the number of edges: ");
    scanf("%d", &edges);

    Graph* graph = createGraph(vertices, edges);

    printf("Enter the source, destination, and weight of each edge:\n");
    for (int i = 0; i < edges; i++) {
        scanf("%d %d %d", &graph->edge[i].source, &graph->edge[i].destination, &graph->edge[i].weight);
    }
    
    clock_t start = clock();
    kruskalMST(graph);
    clock_t end = clock();
    
    
    printf("Time Complexity: %2f",(double)(end-start));

    free(graph);

    return 0;
}

