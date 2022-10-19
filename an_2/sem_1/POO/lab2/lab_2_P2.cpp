/*
Să se implementeze o clasă Car. Această clasă
trebuie să aibă constructori multiplii (minim 4).
Constructorii trebuie să fie definiți în afara
clasei. Clasa Car trebuie să aibă minim 4 atribute
și un constructor să fie de tipul default.
Creați un obiect pentru fiecare constructor.
*/

#include <iostream>
#include <string>

using namespace std;



class Car{
public:
    Car(string br, string typ, int y, int speed, int sts);
    Car(string br, string typ, int y);
    Car(string br, int sts, string typ);
    Car(string br, string typ);
    Car(string br);
    Car();

    void show(){
        cout << "###########" << endl;
        cout << "Marca: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "An: " << release_year << endl;
        cout << "Viteza maxima: " << max_speed << endl;
        cout << "Numar locuri: " << seats << endl;
        cout << "###########" << endl << endl;
    }

    string brand;
    string model;
    int release_year;
    int max_speed;
    int seats;
};

Car::Car(string br, string typ, int y, int speed, int sts){
    brand = br;
    model = typ;
    release_year = y;
    max_speed = speed;
    seats = sts;
}

Car::Car(string br, string typ, int y){
    brand = br;
    model = typ;
    release_year = y;
    max_speed = 0;
    seats = 0;
}

Car::Car(string br, int sts, string typ){
    brand = br;
    model = typ;
    release_year = 0;
    max_speed = 0;
    seats = sts;
}

Car::Car(string br, string typ){
    brand = br;
    model = typ;
    release_year = 0;
    max_speed = 0;
    seats = 0;
}

Car::Car(string br){
    brand = br;
    model = "N/A";
    release_year = 0;
    max_speed = 0;
    seats = 0;
}

Car::Car(){
    brand = "N/A";
    model = "N/A";
    release_year = 0;
    max_speed = 0;
    seats = 0;
    }

int main()
{

    Car m1("Dacia", "Logan", 2016, 140, 5);
    Car m2("Ford", "Focus", 2015);
    Car m3("Mercedes", 5, "GLE");
    Car m4("BMW", "X5");
    Car m5("Audi");
    Car m6;

    cout << "Masina 1" << endl;
    m1.show();

    cout << "Masina 2" << endl;
    m2.show();

    cout << "Masina 3" << endl;
    m3.show();

    cout << "Masina 4" << endl;
    m4.show();

    cout << "Masina 5" << endl;
    m5.show();

    cout << "Masina 6" << endl;
    m6.show();

    return 0;
}