/*
Să se realizeze o clasă Student. Această clasă trebuie să aibă următoarele
atribute: nume, prenume, cnp, anul nasterii toate de tipul private, dar și
numele facultății și anul înființării acesteia (tot private).

Creați metodele de get și set pentru Student. 1p

Creați o metodă care să întoarcă sexul studentului în funcție de CNP. 1p

Creați o metodă care să întoarcă vârsta studentului. 1p

Creați o metodă care să întoarcă diferența de ani dintre anul înființării
facultății și data nașterii studentului. 1. p

Utilizați this Pointer. 1p

NU VA PUNETI CNP-UL VOSTRU!
*/

#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

class Student{
    private:
        string nume;
        string prenume;
        int cnp[13];
        int an_nastere;
        string nume_facultate;
        int an_infiintare_facultate;
    public:
        string getNume(){
            return this->nume;
        }
        
        void setNume(string nume_familie){
            nume = nume_familie;
        }

        string getPrenume(){
            return this->prenume;
        }

        void setPrenume (string nume_dat){
            prenume = nume_dat;
        }

        int getCNP(){
            return *this->cnp;
        }

        void setCNP(){
            char buffer[13];
            int i;
            scanf("%c", &buffer);
            for(i = 0; i < 13; i++) this->cnp[i] = buffer[i];
        }

        int getAnNastere(){
            return this->an_nastere;
        }

        void setAnNastere(int an){
            an_nastere = an;
        }

        string getNumeFacultate(){
            return nume_facultate;
        }

        void setNumeFacultate(string nume_faculta){
            nume_facultate = nume_faculta;
        }

        int getAnInfiintareFacultate(){
            return this->an_infiintare_facultate;
        }

        void setAnInfiintareFacultate(int an_faculta){
            an_infiintare_facultate = an_faculta;
        }

        string getSex(){
            // 135 masculin
            // 246 feminin

            if((this->cnp[0] == 1) || (this->cnp[0] == 3) || (this->cnp[0] == 5)) return "masculin";
            else if ((this->cnp[0] == 2) || (this->cnp[0] == 4) || (this->cnp[0] == 6)) return "feminin";
            else return "o fi om?";
        }

        int getVarsta(){
            return 2022-(this->an_nastere);
        }

        int diffVarstaFaculta(){
            return abs(this->an_infiintare_facultate - an_nastere);
        }

};

int main(){

        Student andrei;
        andrei.setNume("Andrei");
        cout << andrei.getNume() << endl;
        andrei.setCNP();
        cout << andrei.getSex() << endl;

    return 0;
}