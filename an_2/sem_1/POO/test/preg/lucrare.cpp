/*
321AC
DINU MIHAI DINEL
SLAVILA PETRU ANDREI
POPESCU STEFAN LUCIAN

*/





//#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string.h>
#include <vector>
using namespace std;


class Tara{
public:

    ///metoda de scos tari UE din fisierul initial
    void sorteazaTariDinUE()
    {
        ifstream fisierInitial("Fisier Nesortat.txt");
        string buffer;

        ofstream fisierUE("Fisier Sortat UE.txt")
        
        while(getline(fisier, buffer))
        {
            if(strstr(buffer, "Europe")){
                fisierUE << buffer;
        }
        
        fisierInitial.close();
        fisierUE.close();
    }

    ///METODA CALCULARE POPULATION GROWTH
    void calculeazaPopulatia(){
        int nrAni;
        string taraCautata;
        string buffer;
        int popGrowthPeXani;

        cout << "Nume tara (pentru populaion growth): ";
        cin >> taraCautata;

        ///deschidere fisier si cautare date dorite
        ifstream fisierInitial("Fisier Nesortat.txt");

        while(getline(fisier, buffer))
        {
            if(strstr(buffer, taraCautata)){
                cout << "Introduceti un nr pentru afisarea population growth in urmatorii ani: ";
                cin >> nrAni;
            
                float valoareFinala = ;
                
                cout << "Populatia pe uramtorii " << nrAni << " ani este: " << <<endl;
                
                
                
                break;
            }
        }
        fisierInitial.close();
    }
};



class Structure{
    public:
        virtual void open();
        virtual void close();
};



class File : Structure{
    public:
        string adresa;
        vector<Row> rows;


        void parse
    for(auto i = linii.begin(); i != linii.end(); ++i){
    
    }

    for(auto i = linii.begin(); i != linii.end(); ++i){
        strtok(*i, ",");

    }

};

class Row : public File{
public:
    string country;
    string region;
    int area;
    int population;
    float pop_density;
    int gdp;
    float gdp_growth;
    double gdp_capita;
    float perc_agriculture;
    float perc_industry;
    float perc_services;
    float employ_agriculture;
    float employ_industry;
    float employ_services;
    float unemployment;
    float pop_growth;

    void citire_linie()

};



/*
country         string
region          string
area            int
population      int
pop_density     float
gdp             int
gdp_growth      float
gdp_capita      double
perc_agriculture    float
perc_industry       float
perc_services       float
employ_agriculture  float
employ_industry     float
employ_services     float
unemployment        float
pop_growth          float

*/




int main(){


    ifstream inFile;

    inFile.open("country_profile_variables.xlsx");
    if (inFile.is_open()) {
        cout << "File has been opened" << endl;
    }
    else {
        cout << "NO FILE HAS BEEN OPENED" << endl;
    }

    std::vector<string> linii;
    string current;
    while(!inFile.eof()){
        ifstream::getline(inFile, current);
        linii.push_back(current);
        cout << current << endl;
    }




    return 0;
}

