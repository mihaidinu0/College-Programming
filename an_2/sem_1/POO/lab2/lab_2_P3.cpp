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
    string nume;
    string prenume;
    int varsta;

};

int main(){
    
    Sibling sibling1;
    Sibling sibling2 = sibling1;
    
    return 0;
}