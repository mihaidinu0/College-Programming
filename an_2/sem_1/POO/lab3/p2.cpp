#include <stdio.h>
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
            return nume;
        }
        
        void setNume(string nume_familie){
            nume = nume_familie;
        }

        string getPrenume(){
            return prenume;
        }

        void setPrenume (string nume_dat){
            prenume = nume_dat;
        }

        int getCNP(){
            return *cnp;
        }

        void setCNP(){
            
        }

        int getAnNastere(){
            return an_nastere;
        }

        string getNumeFacultate(){
            return nume_facultate;
        }

        int getAnInfiintareFacultate(){
            return an_infiintare_facultate;
        }

};

int main(){

    return 0;
}