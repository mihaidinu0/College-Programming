/*
Dinu Mihai-Dinel
311AC
Lab 7
*/

/*
Creați un graf cu minim 10 noduri și 10 muchii. Fiecare muchie va avea un cost asociat.

Realizați arborele minim de acoperire folosind algoritmul lui Kruskal. Afișați ordinea nodurilor, valoarea muchiilor din arbore și costul total. 4.5

Realizați arborele minim de acoperire folosind algoritmul lui Prim. Afișați ordinea nodurilor, valoarea muchiilor din arbore și costul total. 4.5

Tema trebuie să includă și schema grafului.
*/

#include <stdio.h>
#include <stdlib.h>

struct Graph{

};

struct Node{

};

struct Edge{
    int src, dest, weight;
};



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

}