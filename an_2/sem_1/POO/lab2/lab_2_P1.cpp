/*
 Să se implementeze o clasă cu constructor
 default care să afișeze data curentă (ziua
 și ora) în momentul instanțierii.
*/

#include <iostream>
#include <ctime>

using namespace std;

class Timp {
    public:
        Timp(){
            time_t timp = time(0);
            cout << ctime(&timp) << endl;
        }
        ~Timp(){
            cout << "In cautarea timpului pierdut...";
        }
};

int main(){
    Timp acum;
    return 0;
}