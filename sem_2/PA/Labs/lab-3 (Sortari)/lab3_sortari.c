// https://docs.google.com/presentation/d/1XTqamAa7CGpHJ-MmyLj_ydxtUMvOxlgpPdXfhiKl070/edit#slide=id.p


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#define getName(var) #var

// Functie de swap pentru Bubble Sort si Selection Sort
void swap(int *xp, int *yp){
    int buffer = *xp;
    *xp = *yp;
    *yp = buffer;
}

// Implementare Merge Sort
void mergeSort(int vect[], int l, int r)
{
    if (l < r) {

        int m = l + (r - l) / 2;

        mergeSort(vect, l, m);
        mergeSort(vect, m + 1, r);

        merge(vect, l, m, r);
    }
}

// Functie de merge pentru Merge Sort
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];


    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

      i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }


    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }


    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}


int partition (int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high- 1; j++)
    {

        if (arr[j] <= pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}






// Implementare Quick Sort
void quickSort(int a[], int p, int r)
{
    if(p < r)
    {
        int q;
        q = partition(a, p, r);
        quickSort(a, p, q-1);
        quickSort(a, q+1, r);
    }
}

// Implementare Bubble Sort
void bubblesort(int arr[], int n){
    int i,j;
    for (i=0; i < n-1; i++)
        for (j=0; j<n-i-1; j++)
            if (arr[j] > arr[j+1])
                swap(&arr[j], &arr[j+1]);
}

// Implementare insertion Sort
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;


        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

// Implementare Selection Sort
void selectionSort(int arr[], int n)
{
    int i, j, min_idx;


    for (i = 0; i < n-1; i++)
    {

        min_idx = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min_idx])
            min_idx = j;


        swap(&arr[min_idx], &arr[i]);
    }
}


void afisareVector(int vect[], char nume[30])
{
    printf("%s = { ", nume);
    for(int n=0; n<((sizeof(vect)-1)); n++)
    {
        printf("%d ", vect[n]);
    }
    printf("}\n");
}

int main()
{
//Vectori din Slide-uri laborator 3
int vect1[] = {25, 1, 44, 56, 100, 9, 2};
int vect2[] = {6, 5, 3, 2, 8, 10, 9};
int vect3[] = {100, 67, 34, 22, 15, 10, 2};

// Copii vect1 pentru sortare
int vect1_qs[] = {25, 1, 44, 56, 100, 9, 2};
int vect1_bs[] = {25, 1, 44, 56, 100, 9, 2};
int vect1_ms[] = {25, 1, 44, 56, 100, 9, 2};
int vect1_ss[] = {25, 1, 44, 56, 100, 9, 2};
int vect1_is[] = {25, 1, 44, 56, 100, 9, 2};

// Copii vect2 pentru sortare
int vect2_qs[] = {6, 5, 3, 2, 8, 10, 9};
int vect2_bs[] = {6, 5, 3, 2, 8, 10, 9};
int vect2_ms[] = {6, 5, 3, 2, 8, 10, 9};
int vect2_ss[] = {6, 5, 3, 2, 8, 10, 9};
int vect2_is[] = {6, 5, 3, 2, 8, 10, 9};

// Copii vect3 pentru sortare
int vect3_qs[] = {100, 67, 34, 22, 15, 10, 2};
int vect3_bs[] = {100, 67, 34, 22, 15, 10, 2};
int vect3_ms[] = {100, 67, 34, 22, 15, 10, 2};
int vect3_ss[] = {100, 67, 34, 22, 15, 10, 2};
int vect3_is[] = {100, 67, 34, 22, 15, 10, 2};


// Afisare vectori originali in consola
printf("Vectorii nesortati sunt: \n");
afisareVector(vect1, "vect1");
afisareVector(vect2, "vect2");
afisareVector(vect3, "vect3");


// Incepere Sortari
printf("\nIncepere sortari:\n\n");


printf("Sortari vector 1:\n");
quickSort(vect1_qs, vect1_qs[0], vect1_qs[6]);
afisareVector(vect1_qs, "vect1 quick sort");

bubblesort(vect1_bs, 7);
afisareVector(vect1_bs, "vect1 bubble sort");

mergeSort(vect1_ms, vect1_ms[0], vect1_ms[6]);
afisareVector(vect1_ms, "vect1 merge sort");

selectionSort(vect1_ss, 7);
afisareVector(vect1_ss, "vect1 selection sort");

insertionSort(vect1_is, 7);
afisareVector(vect1_is, "vect1 insertion sort");


printf("\n\n");

printf("Sortari vector 2:\n");
quickSort(vect2_qs, vect2_qs[0], vect2_qs[6]);
afisareVector(vect2_qs, "vect2 quick sort");

bubblesort(vect2_bs, 7);
afisareVector(vect2_bs, "vect2 bubble sort");

mergeSort(vect2_ms, vect2_ms[0], vect2_ms[6]);
afisareVector(vect2_ms, "vect2 merge sort");

selectionSort(vect2_ss, 7);
afisareVector(vect2_ss, "vect2 selection sort");

insertionSort(vect2_is, 7);
afisareVector(vect2_ss, "vect2 insertion sort");


printf("\n\n");

printf("Sortari vector 3:\n");

quickSort(vect3_qs, vect3_qs[0], vect3_qs[6]);
afisareVector(vect3_qs, "vect3 quick sort");

bubblesort(vect3_bs, 7);
afisareVector(vect3_bs, "vect3 bubble sort");

mergeSort(vect3_ms, vect3_ms[0], vect3_ms[6]);
afisareVector(vect3_ms, "vect3 merge sort");

selectionSort(vect3_ss, 7);
afisareVector(vect3_ss, "vect3 selection sort");

insertionSort(vect3_is, 7);
afisareVector(vect3_ss, "vect3 insertion sort");






//Declarare Vector Valori Random.
int marime = 20000;
printf("\nDeclarare vector de: %d numere", marime);
int valori_random[marime];
int vect_qs[marime], vect_ms[marime], vect_bs[marime], vect_is[marime], vect_ss[marime];
printf("\nVector declarat.");


//Inserare valori random
printf("\nIncepere generare valori random.");
for(int i=0; i < marime; i++){
    valori_random[i]=rand();
    vect_qs[i]=valori_random[i];
    vect_bs[i]=valori_random[i];
    vect_ms[i]=valori_random[i];
    vect_is[i]=valori_random[i];
    vect_ss[i]=valori_random[i];
}
printf("\nValori random inserate\n\n");





clock_t inc_bubblesort = clock();
bubblesort(vect_bs, marime);
clock_t sf_bubblesort = clock();
float timp_bubblesort;
timp_bubblesort += (double)(sf_bubblesort - inc_bubblesort) / CLOCKS_PER_SEC;
printf("\nBubble sort efectuat in %f", timp_bubblesort);

char cel_mai_bun[50];
strcpy(cel_mai_bun, "Bubble Sort");
float timp_minim = timp_bubblesort;



clock_t inc_quicksort = clock();
quickSort(vect_bs, vect_qs[0], vect_qs[marime-1]);
clock_t sf_quicksort = clock();
float timp_quicksort;
timp_quicksort += (double)(sf_quicksort - inc_quicksort) / CLOCKS_PER_SEC;
printf("\nQuick sort efectuat in %f", timp_quicksort);

if(timp_quicksort<timp_minim){
    strcpy(cel_mai_bun, "Quick Sort");
    timp_minim = timp_quicksort;
}

clock_t inc_mergesort = clock();
mergeSort(vect_ms, vect_ms[0], vect_ms[marime-1]);
clock_t sf_mergesort = clock();
float timp_mergesort;
timp_mergesort += (double)(sf_mergesort - inc_mergesort) / CLOCKS_PER_SEC;
printf("\nMerge sort efectuat in %f", timp_mergesort);

if(timp_mergesort < timp_minim){
    strcpy(cel_mai_bun, "Merge Sort");
    timp_minim = timp_mergesort;
}


clock_t inc_insertionsort = clock();
bubblesort(vect_is, marime);
clock_t sf_insertionsort = clock();
float timp_insertionsort;
timp_insertionsort += (double)(sf_insertionsort - inc_insertionsort) / CLOCKS_PER_SEC;
printf("\nInsertion sort efectuat in %f", timp_insertionsort);

if(timp_insertionsort < timp_minim){
    strcpy(cel_mai_bun, "Insertion Sort");
    timp_minim = timp_insertionsort;
}


clock_t inc_selectionsort = clock();
bubblesort(vect_ss, marime);
clock_t sf_selectionsort = clock();
float timp_selectionsort;
timp_selectionsort += (double)(sf_selectionsort - inc_selectionsort) / CLOCKS_PER_SEC;
printf("\nSelection sort efectuat in %f", timp_selectionsort);

if(timp_selectionsort < timp_minim){
    strcpy(cel_mai_bun, "Selection Sort");
    timp_minim = timp_selectionsort;
}

printf("\n\nCel mai rapid algoritm este: %s, cu timpul de %f\n\n\n", cel_mai_bun, timp_minim);

return 0;
}

/*

timp_generare += (double)(sfarsit - inceput) /CLOCKS_PER_SEC;
clock_t inc_bubblesort = clock();

*/
