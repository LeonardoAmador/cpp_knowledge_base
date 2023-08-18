#include <iostream>
#include <conio.h>

using namespace std;

// Collection of properties and methods
struct Car{
    string name;
    string color;
    int pot;
    int MaxSpeed;
};

int main(){
    setlocale(LC_ALL, "Turkish");

    Car car1;
    Car car2;

    car1.name = "Crazy";
    car1.color = "Red";
    car1.pot = 260;
    car1.MaxSpeed = 240;

    cout<<"Car's name: "<<car1.name<<"\n";
    cout<<"Color: "<<car1.color<<"\n";
    cout<<"Power: "<<car1.pot<<"\n";
    cout<<"Max Speed: "<<car1.MaxSpeed<<"\n";
    
    return 0;
}