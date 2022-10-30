// DINU MIHAI-DINEL
// 321AC   IS-ACS

// LAB 4    PROBLEMA 5

#include <stdio.h>

int main(){

    // Declaram variabilele
    int sir[100], n, i, nr_crt;

    // Introducere n
    printf("Cate numere vrei sa introduci? ");
    scanf("%d", &n);

    // Citire sir de caractere
    printf("Introdu numerele:\n");
    for(i = 0; i < n; i++){
        printf("%d/%d: ", i+1, n);  // Afisam un contor ca sa stim unde ne aflam cu citirea sirului
        scanf("%d", &nr_crt);
        sir[i] = nr_crt;
    }

    // Sortare 1

    // Sortare 2
}