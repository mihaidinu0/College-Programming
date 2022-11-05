/*
3p Modelați din natură un exemplu de moștenire multiplă
(multiple inheritance) care să conțină constructor default. 
*/







/*
Unele specii sunt suficient de apropiate ca sa se poata reproduce,
dar urmasii nu se pot reproduce la randul lor din cauza unor
probleme genetice pe care le-as fi inteles daca ma duceam la medicina.
*/
class Tigru{
    public:
        int flag_genetic_x;
        int sanatate_x = 1; // 1 = sanatos / 0 = bolnav
        Tigru();

};

class Leu{
    public:
        int flag_genetic_y;
        int sanatate_y;// 1 = sanatos / 0 = bolnav
        Leu();
};

class Liger : public Leu, public Tigru{
    int sanatate;
    public:
        Liger();
};

Tigru::Tigru(){
    this->flag_genetic_x = 1;
    this->sanatate_x = 1;
}

Leu::Leu(){
    this->flag_genetic_y = 1;
    this->sanatate_y = 1;
}

Liger::Liger(){
    if (this->flag_genetic_x == 1 || this->flag_genetic_y == 1){
        this->sanatate = 0; // Urmasul este bolnav
    }
}



#include <iostream>
using namespace std;

int main(){


    return 0;
}