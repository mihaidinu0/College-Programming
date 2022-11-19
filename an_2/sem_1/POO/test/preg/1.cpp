#include <iostream>
#include <fstream>
#include <vector>

#define MAX_COLS 50

using namespace std;


class File{
    public:
        std::vector<Column*> cols[MAX_COLS];
        File(){

        }

};

class Column{
    public:
        Column * next;
        Column(){

        }

};


int main(){

    fstream fin;

    fin.open("country_vaccinations.csv", ios::in);



    return 0;
}