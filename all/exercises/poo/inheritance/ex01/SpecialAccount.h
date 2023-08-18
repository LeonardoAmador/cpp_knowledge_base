#pragma once
#include "Account.h"

using namespace std;

class SpecialAccount : public Account {
public:
    SpecialAccount(string name, string number, double balance, double creditLimit);
    double remove(double value);

private:
    void changeTypeOf(double &value);
    double creditLimit;
};
