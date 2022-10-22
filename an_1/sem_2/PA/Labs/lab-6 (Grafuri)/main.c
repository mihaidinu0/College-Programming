/*
Dinu Mihai-Dinel
311 AC

Laborator 6 - Grafuri
https://docs.google.com/presentation/d/14JdNrdqTUIDOx2v3AhHukYMx_K89DfvB5wWWzm-T2Sk/edit#slide=id.p

1. Realizați un graf pe care să îl parcurgeți atât cu BFS cât și cu DFS. Separat să aveți și graful desenat și matricea de adiacență. 5p
2. Realizați un algoritm care să detecteze dacă într-un graf orientat există un drum între două noduri date. 4p
*/

#include <stdio.h>
#include <stdlib.h>

// Definire numar maxim de muchii intr-un graph
#define N 13




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
    int src, dest;
};

// Functie care creeaza graph din muchii specificate
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

        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->dest = dest;

        newNode->next = graph->head[src];

        graph->head[src] = newNode;
    }

    return graph;
}

// Printeaza lista de adiacenta
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



void DFS(int);


int main(void)
{

    struct Edge edges[] =
    {
        {0, 1}, {0, 2}, {0, 3}, {0, 4}, {1, 5}, {1, 6}, {6, 9}, {6, 10}, {3, 7}, {7, 11}, {11, 12}, {11, 13}, {4, 8}
    };

    int n = sizeof(edges)/sizeof(edges[0]);

    struct Graph *graph = createGraph(edges, n);

    printGraph(graph);


    //Creare matrice de adiacenta

    int c,r;

    int adjMat[n+1][n+1];

    //Initialiare cu 0

    for(int i=0; i<=n; i++){
        for(int j=0; j<=n; j++){
            adjMat[i][j]=0;
        }
    }

    int a,b;
    for(int i=0; i<=n; i++){

        a = edges[i].src;
        b = edges[i].dest;

        adjMat[a][b]=1;
        adjMat[b][a]=1;

    }


    //Printare Matrice in consola pentru ca n-am incredere in codul meu :)


    printf("\n\n");
    for(int i=0; i<=n; i++){
        for(int j=0; j<=n; j++){
            printf("%d ", adjMat[i][j]);
        }
        printf("\n");
    }


    //Algoritm BFS



    //Algoritms DFS

    int visited[20],d=13;

    for(int i=0; i<20; i++){
        visited[i]=0;
    }

    void DFS(int i)
    {
        int j;
    printf("\n%d",i);
        visited[i]=1;
    for(j=0;j<=d;j++)
           if(!visited[j]&&adjMat[i][j]==1)
                DFS(j);
    }

    DFS(1);


    return 0;


}
