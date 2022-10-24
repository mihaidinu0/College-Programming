/*
Dinu Mihai-Dinel
311AC
Lab 7
https://docs.google.com/presentation/d/1L0fn9tjrExNLrm-nyk7EK4X5KjATVQni04Lw2X4ws2A/edit#slide=id.p
*/

/*
Creați un graf cu minim 10 noduri și 10 muchii. Fiecare muchie va avea un cost asociat.

Realizați arborele minim de acoperire folosind algoritmul lui Kruskal.
Afișați ordinea nodurilor, valoarea muchiilor din arbore și costul total. 4.5

Realizați arborele minim de acoperire folosind algoritmul lui Prim.
Afișați ordinea nodurilor, valoarea muchiilor din arbore și costul total. 4.5

Tema trebuie să includă și schema grafului.
*/

#include <stdio.h>
#include <stdlib.h>

#define N 19


struct Graph
{
    struct Node* head[N];
};

struct Node
{
    int dest;
    struct Node* next;
};

struct Edge {
    int src, dest, weight;
};



struct Graph* createGraph(struct Edge edges[], int n)
{
    struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));

    for (int i = 0; i < N; i++) {
        graph->head[i] = NULL;
    }

    for (int i = 0; i < n; i++)
    {
        int src = edges[i].src;
        int dest = edges[i].dest;
        int weight = edges[i].weight;

        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->dest = dest;

        newNode->next = graph->head[src];

        graph->head[src] = newNode;
    }

    return graph;
}

void printGraph(struct Graph* graph)
{
    for (int i = 0; i < N; i++)
    {
        struct Node* ptr = graph->head[i];
        while (ptr != NULL)
        {
            printf("(%d -> %d)\t", i, ptr->dest);
            ptr = ptr->next;
        }

        printf("\n");
    }
}

void main(){
    
    struct Edge edges[200] ={
        {3, 4, 12},
        {0, 14, 5},
        {0, 10, 20},
        {14, 6, 8},
        {10, 6, 1},
        {1, 10, 6},
        {8, 1, 1},
        {13, 8, 12},
        {7, 8, 1},
        {7, 4, 3},
        {5, 2, 5},
        {12, 5, 2},
        {15, 9, 6},
        {2, 15, 0},
        {2, 11, 1},
        {5, 3, 7},
        {12, 10, 5},
        {7, 12, 0},
        {5, 0, 200}
    };

    int n = sizeof(edges)/sizeof(edges[0]);

    struct Graph *graph = createGraph(edges, n);

    //Matrice de Adiacenta
    
    
    int c,r;

    int adjMat[n+1][n+1];

    // Initializare cu 0

    for(int i=0; i<=n; i++){
        for(int j=0; j<=n; j++){
            adjMat[i][j]=0;
        }
    }

    int a,b;
    for(int i=0; i<=n; i++){

        a = edges[i].src;
        b = edges[i].dest;

        adjMat[a][b]=edges[i].weight;
        adjMat[b][a]=edges[i].weight;

    }


    //Printare Matrice in consola pentru ca n-am incredere in codul meu :)


    printf("\n\n");
    for(int i=0; i<=n; i++){
        for(int j=0; j<=n; j++){
            printf("%d ", adjMat[i][j]);
        }
        printf("\n");
    }

}