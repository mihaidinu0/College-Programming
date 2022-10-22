#include <stdio.h>
#include <stdlib.h>



/*
Pointeri

Declarare:  int *nume;
Adresa:     
Continut: 

*/

struct Node{
    int data;
    struct Node* next;
};



// In cazul struct, mentionezi struct la argument
void print_list(struct No)


void main(){
    struct Node a = {20, NULL};
    struct Node b = {35, &a};
    struct Node c = {9, &b};
    struct Node d = {11, &c};
}