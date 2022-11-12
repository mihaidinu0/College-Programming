/*
3p Creați o clasă “Volume” care să aibă o metodă
supraîncărcată pentru a calcula și afișa volumul
pentru cub, sferă și piramidă, plus o metodă care
să aibă același nume și să afișeze un mesaj. 
*/

// Volum Sfera: 4/3*pi*r^3
// Volum Cub: l^3
// Volum Piramida: 1/3*L*l*h

#include <iostream>
#include <string>
#include <math.h>

using namespace std;

class Volume{
    public:
        string getVolume(){
            return "Volumul nu poate fi calculat";
        }
        float getVolume(float L, float l, float h){
            return L*l*h/3;
        }
        float getVolume(float l){
            return (pow(l, 3));
        }
        float getVolume(int r){
            return (pow(r, 3)*3.14159*3/4);
        }



};

int main(){

    Volume v1;

    int r = 5;
    float l = 4.5;

    float l2 = 3;
    float L = 4;
    float h = 12.5;

    cout << "Sfera: r = " << r << ", Volum = " << v1.getVolume(r) << endl;
    cout << "Cub: l = " << l << ", Volum = " << v1.getVolume(l) << endl;
    cout << "Piramida: L = " << L << ", l = " << l2 << ", h = " << h << ", Volum = " << v1.getVolume(L, l2, h) << endl;
    cout << v1.getVolume();

    return 0;
}