#include "Employee.h"
#include <string>

class Hourly : public Employee {
public:
    Hourly(int number, std::string name, double hourlyWage, double hoursWorked) : Employee(number, name), hourlyWage(hourlyWage), hoursWorked(hoursWorked) {}

    double getSalaryValue() {
        return (hourlyWage * hoursWorked);
    }

private:
    double hourlyWage;
    double hoursWorked;
};

