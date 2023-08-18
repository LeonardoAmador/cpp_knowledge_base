#include <iostream>
#include <algorithm>
#include <sstream>

#include "Hourly.h"
#include "Manager.h"
#include "Seller.h"

using namespace std;

void getHigherSalary(Seller e1, Manager e2, Hourly e3) {
    double e1Salary = e1.getSalaryValue();
    double e2Salary = e2.salaryValue();
    double e3Salary = e3.getSalaryValue();

    double salaries[3] = { e1Salary, e2Salary, e3Salary };
    sort(salaries, salaries + 3);

    double highestSalary = salaries[2];

    if (highestSalary == e1Salary) {
        stringstream ss;
        ss << e1.getNumber();
        cout << "Number: " << ss.str() << endl;
        cout << "Name: " << e1.getName() << endl;
        cout << "Salary: " << e1Salary << endl;
    } else if (highestSalary == e2Salary) {
        stringstream ss;
        ss << e2.getNumber();
        cout << "Number: " << ss.str() << endl;
        cout << "Name: " << e2.getName() << endl;
        cout << "Salary: " << e2Salary << endl;
    } else {
        stringstream ss;
        ss << e3.getNumber();
        cout << "Number: " << ss.str() << endl;
        cout << "Name: " << e3.getName() << endl;
        cout << "Salary: " << e3Salary << endl;
    }
}

int main() {
    Seller e1(215785, "Leo Amador", 1200, 250, 0.5);
    Manager e2(215900, "Jhou gust", 200000);
    Hourly e3(696969, "Ada noia", 90, 60);

    getHigherSalary(e1, e2, e3);

    return 0;
}

