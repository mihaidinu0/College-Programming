#include <iostream>
#include <time.h>

using namespace std;

class Timp{
    public:
    Timp(){
        time_t timp;
        cout << time(timp) <<endl;
    }
}

int main(){
    Timp now;
}


