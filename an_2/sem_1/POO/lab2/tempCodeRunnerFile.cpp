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
#include <string>
using namespace std;

class Sibling{
public:
    string * nume;
    string * prenume;
    int * varsta;


    // Default Constructor
    Sibling();
    // Constructor
    Sibling(string name, string prenume, int varsta);
    // Copy Constructor
    Sibling(const Sibling& clasa);
    // Destructor
    ~Sibling();
    // Update
    void update();

};


// Metode Sibling
Sibling::Sibling(){
    nume = new string;
    *nume = "N/A";
    prenume = new string;
    *prenume = "N/A";
    varsta = new int;
    *varsta = 0;
}

Sibling::Sibling(string nume_fam, string nume_pers, int v){
    nume = new string;
    nume = &nume_fam;
    prenume = new string;
    prenume = &nume_pers;
    varsta = new int;
    varsta = &v;
}

Sibling::Sibling(const Sibling& clasa){
    nume = new string;
    strcpy(nume, clasa.nume);
    prenume = new string;
    strcpy(nume, clasa.nume);
    varsta = new int;
    varsta = clasa.varsta;
}

void Sibling::update(){

}

Sibling::~Sibling(){

}


int main(){
    
    Sibling ion("Popescu", "Ion", 37);
    Sibling marian = ion;
    
    cout << "Inainte de update:" << endl;
    cout << ion.nume << " " << ion.prenume << " " << ion.varsta << endl;
    cout << marian.nume << " " << marian.prenume << " " << marian.varsta << endl;

    cout << "Dupa update: " << endl;
    cout << ion.nume << " " << ion.prenume << " " << ion.varsta << endl;
    cout << marian.nume << " " << marian.prenume << " " << marian.varsta << endl;
    
    return 0;
}