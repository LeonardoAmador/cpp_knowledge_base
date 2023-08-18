#include "Account.h"
#include <iostream>
#include <typeinfo>
#include <string>
#include <sstream>
#include <stdexcept>

using namespace std;

Account::Account(string name, string number, double balance) {
    this->name = name;
    this->number = number;
    this->balance = balance;
}

double Account::deposit(double value) {
    if (validateInputs(value)) {
        cout << "Argument must be of type number" << endl;
        return balance;
    }
    else {
        balance += value;
        return balance;
    }
}

double Account::remove(double value) {
    if (validateInputs(value)) {
        throw invalid_argument("Arguments must be of type number");
    }
    else {
        if (value > balance) {
            throw runtime_error("Insufficient balance ):");
        }
        else {
            balance -= value;
            return balance;
        }
    }
}

double Account::getBalance() {
    return balance;
}

string Account::checkBalance() {
    stringstream ss;
    ss <<this->name<<"\n this is your current balance: " << getBalance();
	cout<<"\n";
    return ss.str();
}

bool Account::validateInputs(double value) {
    return (typeid(value) != typeid(double));
}
