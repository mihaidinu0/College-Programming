// DINU MIHAI-DINEL
// 321AC   IS-ACS

// LAB 4    PROBLEMA 2

#include <stdio.h>

int main(){

    // Declaram variabilele
    int v[] = {5, 10, 15, 20, 25, 30, 35};
    int n = sizeof(v) / sizeof(int); // Determinam numarul de elemente din vector
    int i;
    int suma = 0, medie = 0;

    int pozitii[50];
    int crt, min, j;

    // Sumam vectorul
    for(i=0; i<n; i++){
        suma += v[i];
    }

    // Calculam media
    medie = suma / n;

    // Parcurgem vectorul si cautam daca media se afla in aceasta
    for(i=0; i<n; i++){
        if(v[i] == medie){
            printf("Valoarea medie apartine vectorului!\n");
            break; // Oprim FOR-ul cand valoarea a fost gasita
        }

        else printf("Media NU apartine vectorului.\n");
    
    // Cautam valoarea minima din vector
    min = v[0];
    for(i=1; i<n; i++){
        if(v[i] < min) min = v[i];
    }

    // Cautam pozitiile pe care se afla valoarea minima
    j = 0;
    for (i=0; i<n; i++){
        if(v[i] == min){
            pozitii[j] = i;
            j++;
        }
    }

    // Afisam valoarea minima si pozitiile pe care se afla
    printf("Valoarea minima este: %d\n", min);
    printf("Pozitiile sunt:\n");
    for(i=0; i<j; i++){
        printf("Poz %d\n", pozitii[i]);
    }

    return 0;
}
}