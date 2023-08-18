#include "SpecialAccount.h"
#include <iostream>
#include <typeinfo>
#include <string>

using namespace std;

SpecialAccount::SpecialAccount(string name, string number, double balance, double creditLimit) :
    Account(name, number, balance), creditLimit(creditLimit) {}

double SpecialAccount::remove(double value) {
    changeTypeOf(value);
    float unitedValues = this->balance += creditLimit;
    float missingValue = value - unitedValues;

    if (value > unitedValues) {
    	cout<< "------------------------------"<<endl;
        cout << "Invalid value ):"<<endl;
        cout<< "R$"<<missingValue<< " missing."<<endl;
        cout<< "------------------------------"<<endl;
    } else {
        return this->balance -= value;
    }
}

void SpecialAccount::changeTypeOf(double &value) {
    if (typeid(value) == typeid(string)) {
        value = value;
    }
}

