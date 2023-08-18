#pragma once
#include <string>

using namespace std;

class Account {
public:
    Account(string name, string number, double balance);
    double balance;
    double deposit(double value);
    double remove(double value);
    string checkBalance();
    double getBalance();

private:
    bool validateInputs(double value);
    string name;
    string number;
};
