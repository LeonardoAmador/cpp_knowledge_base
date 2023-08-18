#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include <stdexcept>
#include <string>
#include <typeinfo>

using namespace std;

class Employee {
private:
    int number;
    string name;

    bool validateEmployeeName(string name) {
        try {
            if (typeid(name) == typeid(string) && name.length() > 0 && name.length() <= 50) {
                return true;
            }
            throw runtime_error("Invalid name");
        } catch (const exception& e) {
            cout << e.what() << endl;
            return false;
        }
    }

public:
    Employee(int number, string name) {
        this->number = number;
        if (validateEmployeeName(name)) {
            this->name = name;
        }
    }

    int getNumber() const {
        return number;
    }

    void setNumber(int number) {
        if (number >= 5) {
            this->number = number;
        } else {
            cout << "Invalid number" << endl;
        }
    }

    string getName() const {
        return name;
    }

    void setName(string name) {
        if (validateEmployeeName(name)) {
            this->name = name;
        }
    }
};
#endif

