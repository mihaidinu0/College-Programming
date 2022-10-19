#include <iostream>
#include <string>

using namespace std;

class Student{
    public:
        string nume;
        string prenume;
        string grupa;
        string pos_feedback;
        string neg_feedback;
        string after_college;
};

class Sorter{
    public:
        void swap(int *xp, int *yp)
            {
                int temp = *xp;
                *xp = *yp;
                *yp = temp;
            }
        void sortingAlg(int arr[], int n){
                int i, j, min_idx;
 
                for (i = 0; i < n-1; i++)
                {
                

                    min_idx = i;
                    for (j = i+1; j < n; j++)
                    if (arr[j] > arr[min_idx])
                        min_idx = j;

                    if(min_idx!=i)
                        swap(&arr[min_idx], &arr[i]);
                    }}
        void printArray(int arr[], int n){
            int i;
            for (i=0; i<n; i++){
                cout << arr[i] << " ";
                cout << endl;
                }
            }

};

int main(){

    Student Mihai;
    Mihai.nume = "Dinu";
    Mihai.prenume = "Mihai";
    Mihai.grupa = "321AC";
    Mihai.pos_feedback = "Straightforward si clar totul, atmosfera placuta, vin mai mult de placere decat din obligatie";
    Mihai.neg_feedback = "Null ;))";
    Mihai.after_college = "Research si/sau Development, aspir la FAANG (sau MAANG, sau ce doamne ia-ma e acum), dar ramane de vazut :P";

    cout << Mihai.nume << endl;
    cout << Mihai.prenume << endl;
    cout << Mihai.grupa << endl;
    cout << Mihai.pos_feedback << endl;
    cout << Mihai.neg_feedback << endl;
    cout << Mihai.after_college << endl;


    int arr[5] = {10, 2, 22, 5, 1};
    int n = 5;
    Sorter sorting;
    sorting.sortingAlg(arr, n);
    sorting.printArray(arr, n);

    return 0;
}