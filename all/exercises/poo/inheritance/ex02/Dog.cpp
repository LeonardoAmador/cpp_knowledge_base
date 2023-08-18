#include "Dog.h"
#include <iostream>
#include <typeinfo>

using namespace std;

Dog::Dog(string type, string color, string name, string race) : Animal(type, color) {
    this->name = name;
    this->race = race;
}

void Dog::showNameRace() {
    if (typeid(this->name) == typeid(string) && typeid(this->race) == typeid(string)) {
        cout << Animal::showTypeColor() << endl;
        cout << "My name " << this->name << endl;
        cout << "My race " << this->race << endl;
    }
}

