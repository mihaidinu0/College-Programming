#include <stdio.h>
#include <stdlib.h>
#include <math.h>




struct Edge {
    int src, dest, weight;
};




void dijkstra(int graf[x][x], int start){

    int explorat[x];
    int cost[x];

    for(int i=0; i<x; i++){
        explorat[i]=0;
        cost[i]=INFINITY;
    }

    for (int i=0; i<x; i++){
        int dist = minDistance(cost, explorat);
        explorat[dist]=1;
    }

}



void main()
{

struct Edge muchii[] ={
        {3, 4, 12},
        {0, 14, 5},
        {0, 10, 20},
        {14, 6, 8},
        {10, 6, -20},
        {1, 10, 6},
        {8, 1, 1},
        {13, 8, 12},
        {7, 8, 1},
        {7, 4, 3},
        {5, 2, 5},
        {12, 5, 2},
        {15, 9, -8},
        {2, 15, 0},
        {2, 11, 1},
        {5, 3, -7},
        {12, 10, 5},
        {7, 12, 0},
        {5, 0, 200}
    };


    int nr_noduri = 16;



    // Numarul de muchii
    int nr_muchii = sizeof(muchii)/sizeof(muchii[0]);
    //Niste teste..
    //printf("\nmuchii = %d\n", sizeof(muchii));
    //printf("\nmuchii0 = %d\n", sizeof(muchii[0]));
    //printf("\nn = %d\n", n);

    int adj_mat[nr_noduri][nr_noduri];

    //Initializare cu Infinitate
    for(int i=0; i<nr_noduri; i++){
        for(int j=0; j<nr_noduri; j++){
            adj_mat[i][j]=9999;
        }
    }

    //Adaugare Muchii
    for(int i=0; i<nr_muchii; i++){
        adj_mat[muchii[i].src][muchii[i].dest]=muchii[i].weight;
        adj_mat[muchii[i].dest][muchii[i].src]=muchii[i].weight;
    }


    //Printare Matrice
    printf("\nPrintare matrice de adiacenta:\n\n");
    for(int i=0; i<nr_noduri; i++){
        for(int j=0; j<nr_noduri; j++){
            printf("%d ", adj_mat[i][j]);
        }
        printf("\n");
    }

}
