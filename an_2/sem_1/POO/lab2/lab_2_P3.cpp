/*
Să se implementeze o clasă Sibling. Atributele din
interiorul clasei vor fi cele de nume, prenume și
vârstă, toate alocate prin intermediul pointerilor.
Pentru această clasă trebuie să aveți și un copy
constructor. Creați un obiect sibling1. Creați un
obiect sibling2 cu ajutorul copy constructorului
și faceți update la prenume și vârstă. Afișați
atributele fiecărui obiect. 2p
*/

#include <iostream>
#include <cstring>
using namespace std;

class Sibling{
    public:
        char *prenume;
        char *nume;
        int varsta;

        // Constructor
        Sibling(const char *p = NULL, const char *n = NULL, int a = 0);

        // Destructor
        ~Sibling(){
            delete [] prenume;
            delete [] nume;
            cout<<"Murder in progress.."<<endl;
        }

        // Copy Constructor
        Sibling(const Sibling&);
        void update(const char *,int);
};

Sibling::Sibling(const char *p, const char *n,int a){
    prenume = new char[strlen(p)+1];
    nume = new char[strlen(n)+1];
    strcpy(prenume, p);
    strcpy(nume, n);
    varsta = a;
}

Sibling::Sibling(const Sibling& clasa){
    varsta = clasa.varsta;
    nume = new char[strlen(clasa.nume)+1];
    prenume = new char[strlen(clasa.prenume)+1];
    strcpy(nume, clasa.nume);
    strcpy(prenume, clasa.prenume);
}

void Sibling::update(const char *p, int a){
    varsta = a;
    delete [] prenume;
    prenume = new char[strlen(p)+1];
    strcpy(prenume, p);}

int main(){
    Sibling sibling1("Ion", "Popescu", 35);
    Sibling sibling2 = sibling1;

    cout<<"Inainte de update: "<<endl;
    cout << sibling1.prenume << " " << sibling1.nume << " " << sibling1.varsta << endl;
    cout << sibling2.prenume << " " << sibling2.nume << " " << sibling2.varsta << endl;

    sibling2.update("Alexia", 27);

    cout<<endl<<"Dupa update:"<<endl;
    cout << sibling1.prenume << " " << sibling1.nume << " " << sibling1.varsta << endl;
    cout << sibling2.prenume << " " << sibling2.nume << " " << sibling2.varsta << endl;

    cout << endl;

    return 0;
}