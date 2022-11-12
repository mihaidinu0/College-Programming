#include <iostream>

using namespace std;

class Ceva{
    public:
        string a;
        string b;

        Ceva(){
            this->a = "Coca";
            this->b = "Cola";
        }

        void operator +(){
            string temp;
            temp = a;
            this->a += this->b;
            this->b += temp;
        }

        void print(){
            cout << "a: " << this->a << "\t b: " << this->b << endl;
        }
};

int main(){

    Ceva x;
    x.print();
    +x;
    x.print();

    return 0;
}