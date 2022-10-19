#include <ctime>
#include <iostream>

using namespace std;

int main(){
    
    cout << ctime((time_t)time(0)) << endl;
    return 0;
}