#include <iostream>
#include <string>

#include "Employee.h"

class Seller : public Employee {
private:
    double baseSalary;
    double salesValuePerMonth;
    double perCommission;

public:
    Seller(int number, std::string name, double baseSalary, double salesValuePerMonth, double perCommission)
        : Employee(number, name), baseSalary(baseSalary), salesValuePerMonth(salesValuePerMonth), perCommission(perCommission) {}

    double getSalaryValue() const {
        if (validateTypeOfNumber(baseSalary, salesValuePerMonth, perCommission)) {
            return ((baseSalary + salesValuePerMonth) * perCommission);
        } else {
            std::cout << "Enter a valid number" << std::endl;
            return 0;
        }
    }

private:
    bool validateTypeOfNumber(double baseSalary, double salesValuePerMonth, double perCommission) const {
        return (baseSalary >= 0 && salesValuePerMonth >= 0 && perCommission >= 0);
    }
};

