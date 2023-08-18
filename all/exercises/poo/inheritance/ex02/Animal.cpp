#include "Animal.h"
#include <iostream>
#include <typeinfo>

using namespace std;

Animal::Animal(string type, string color) {
    this->type = type;
    this->color = color;
}

string Animal::showTypeColor() {
    if (!this->validateStringType()) {
        return "I'm a " + this->type + " (:\nMy color: " + this->color + ".";
    } else {
        cout << "Arguments must be of type string!" << endl;
        return "";
    }
}

string Animal::getColor() {
    return "This is my color: " + this->color;
}

bool Animal::validateStringType() {
    return (typeid(this->type) != typeid(string)) || 
           (typeid(this->color) != typeid(string));
}

