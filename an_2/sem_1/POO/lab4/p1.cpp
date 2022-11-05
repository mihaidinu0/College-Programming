/*
[X] 6p Realizați o clasă Beer, care să conțină atributele type
și origin (ambele string și să fie protected). Clasa trebuie să aibă:
[X] Un constructor default
Un constructor care va inițializa toți parametrii
Metode de get pentru cei doi parametrii
Tipul A: etichetă pătrată (private length)
Tipul B: etichetă rotundă și transparentă (private radius)
Tipul C: în formă de triunghi dreptunghic (private base și height)


 Din clasa Beer derivați alte 3 clase printr-o moștenire private. Fiecare va avea un tip diferit de etichetă pe sticlă

Fiecare clasă va avea constructori default și constructori cu parametrii care să seteze fiecare atribut.
Fiecare clasă trebuie să aibă o metodă de a întoarce aria etichetei, a tipului și a originii.

*/


#include <iostream>
#include <string>
using namespace std;

class Beer{
    protected:
        string type;
        string origin;

    public:
        // Constructori
        Beer();
        Beer(string t, string o);

        // Getters
        string getType();
        string getOrigin();

        // Setters
        void setType(string t);
        void setOrigin(string o);
};

// Metode Superclass Beer

// Constructor Default
Beer::Beer(){
    this->setType("Nedefinit");
    this->setOrigin("Nedefinit");
}

// Constructor full
Beer::Beer(string t, string o){
    this->setType(t);
    this->setOrigin(o);
}

// Getters Beer
string Beer::getType(){
    return this->type;
}

string Beer::getOrigin(){
    return this->origin;
}

// Setters Beer
void Beer::setType(string t){
    this->type = t;
}

void Beer::setOrigin(string o){
    this->origin = o;
}

//////////////////////////////////////
//////////////////////////////////////
//////////////////////////////////////
//////////////////////////////////////


// Tipul A: etichetă pătrată (private length)
class Beer_A : private Beer{
    private:
        int length;

    public:
        // Constructori
        Beer_A();

            // Overloading pentru INT si FLOAT
        Beer_A(string t, string o, int l);
        Beer_A(string t, string o, float l);

            // Overloading pentru INT si FLOAT
        Beer_A(int l);
        Beer_A(float l);

        void setLength(int l);
        void setLength(float l);

        float getLength();

};

// Metode Beer_A
Beer_A::Beer_A(){
    this->setType("Nedefinit");
    this->setOrigin("Nedefinit");
    this->setLength(0);
}

Beer_A::Beer_A(string t, string o, int l){
    this->setType(t);
    this->setOrigin(o);
    this->setLength(l);
}

Beer_A::Beer_A(string t, string o, float l){
    this->setType(t);
    this->setOrigin(o);
    this->setLength(l);
}

Beer_A::Beer_A(int l){
    this->setType("Nedefinit");
    this->setOrigin("Nedefinit");
    this->setLength(l);
}

Beer_A::Beer_A(float l){
    this->setType("Nedefinit");
    this->setOrigin("Nedefinit");
    this->setLength(l); 
}

void Beer_A::setLength(int l){
    this->length = l;
}

void Beer_A::setLength(float l){
    this->length = l;
}

float Beer_A::getLength(){
    return this->length;
}

//////////////////////////////////////
//////////////////////////////////////
//////////////////////////////////////
//////////////////////////////////////

// Tipul B: etichetă rotundă și transparentă (private radius)
class Beer_B : private Beer{
    private:
        int radius;

    public:
        Beer_B();
        Beer_B(string t, string o, int r);
        Beer_B(string t, string o, float r);
        Beer_B(int r);
        Beer_B(float r);

        // Method overloading pentru INT si FLOAT
        void setRadius(int r);
        void setRadius(float r);

        float getLabelArea();

};

// Metode Beer_B

Beer_B::Beer_B(){
    this->setType("Nedefinit");
    this->setOrigin("Nedefinit");
    this->setRadius(0);
}

Beer_B::Beer_B(string t, string o, int r){
    this->setType(t);
    this->setOrigin(o);
    this->setRadius(r);
}

Beer_B::Beer_B(string t, string o, float r){
    this->setType(t);
    this->setOrigin(o);
    this->setRadius(r);
}

Beer_B::Beer_B(int r){
    this->setType("Nedefinit");
    this->setOrigin("Nedefinit");
    this->setRadius(r);
}

Beer_B::Beer_B(float r){
    this->setType("Nedefinit");
    this->setOrigin("Nedefinit");
    this->setRadius(r);
}

void Beer_B::setRadius(int r){
    this->radius = r;
}

void Beer_B::setRadius(float r){
    this->radius = r;
}

float Beer_B::getLabelArea(){
    return (this->radius*this->radius*3.14159);
}

//////////////////////////////////////
//////////////////////////////////////
//////////////////////////////////////
//////////////////////////////////////

// Tipul C: în formă de triunghi dreptunghic (private base și height)
class Beer_C : private Beer{
    private:
        int base;
        int height;

    public:
        Beer_C();

        // Constructor overloading pentru INT si FLOAT
        Beer_C(string t, string o, int b, int h);
        Beer_C(string t, string o, float b, float h);
        Beer_C(int b, int h);
        Beer_C(float b, float h);

        // Method overloading pentru INT si FLOAT 
        float getLabelArea(int b, int h);
        float getLabelArea(float b, float h);

        // Method overloading pentru INT si FLOAT
        void setBase(int b);
        void setHeight(int h);

        // Method overloading pentru INT si FLOAT
        void setBase(float b);
        void setHeight(float h);
};
// Metode Beer_C

Beer_C::Beer_C(){
    this->setType("Nedefinit");
    this->setOrigin("Nedefinit");
    this->setBase(0);
    this->setHeight(0);
}

Beer_C::Beer_C(string t, string o, int b, int h){
    this->setType(t);
    this->setOrigin(o);
    this->setBase(b);
    this->setHeight(h);
}

Beer_C::Beer_C(string t, string o, float b, float h){
    this->setType(t);
    this->setOrigin(o);
    this->setBase(b);
    this->setHeight(h);
}

Beer_C::Beer_C(int b, int h){
    this->setType("Nedefinit");
    this->setOrigin("Nedefinit");
    this->setBase(b);
    this->setHeight(h);
}

Beer_C::Beer_C(float b, float h){
    this->setType("Nedefinit");
    this->setOrigin("Nedefinit");
    this->setBase(b);
    this->setHeight(h);
}

float Beer_C::getLabelArea(int b, int h){
    return(b * h);
}

float Beer_C::getLabelArea(float b, float h){
    return(b * h);
}

void Beer_C::setHeight(int h){
    this->height = h;
}

void Beer_C::setHeight(float h){
    this->height = h;
}

void Beer_C::setBase(int b){
    this->base = b;
}

void Beer_C::setBase(float b){
    this->base = b;
}

//////////////////////////////////////
//////////////////////////////////////
//////////////////////////////////////
//////////////////////////////////////

int main(){

    return 0;
}
