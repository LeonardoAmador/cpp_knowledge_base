#ifndef MANAGER_H
#define MANAGER_H

#include <string>
#include "Employee.h"

class Manager : public Employee {
private:
    double monthSalary;

public:
    Manager(int number, std::string name, double monthSalary) : Employee(number, name), monthSalary(monthSalary) {}

    double salaryValue() const {
        double salary = validateNegativeNumber(monthSalary);
        if (salary == 0) {
            std::cout << "Salary cannot be negative" << std::endl;
        }
        return salary;
    }

private:
    double validateNegativeNumber(double number) const {
        return number < 0 ? 0 : number;
    }
};

#endif // MANAGER_H

