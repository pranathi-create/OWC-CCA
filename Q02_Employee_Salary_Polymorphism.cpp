#include <iostream>
using namespace std;

class Employee {
public:
    virtual double calculateSalary() = 0;
    virtual ~Employee() {}
};

class Developer : public Employee {
    double basic, bonus;
public:
    Developer(double b, double x) : basic(b), bonus(x) {}
    double calculateSalary() override {
        return basic + bonus;
    }
};

class Manager : public Employee {
    double basic, allowance;
public:
    Manager(double b, double a) : basic(b), allowance(a) {}
    double calculateSalary() override {
        return basic + allowance;
    }
};

int main() {
    string type;
    double basic, extra;
    cin >> type >> basic >> extra;

    Employee *emp;
    if (type == "Developer") {
        Developer d(basic, extra);
        emp = &d;
        cout << "Total Salary = " << emp->calculateSalary();
    } else if (type == "Manager") {
        Manager m(basic, extra);
        emp = &m;
        cout << "Total Salary = " << emp->calculateSalary();
    } else {
        cout << "Invalid employee type";
    }
    return 0;
}