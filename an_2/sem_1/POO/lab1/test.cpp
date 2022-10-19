#include <string>
#include <iostream>

using namespace std;

class Geeks{
    public:
        string geekname;
};

int main(){
    
    Geeks albert;

    albert.geekname = "albertut";
    cout << albert.geekname;

    return 0;
}