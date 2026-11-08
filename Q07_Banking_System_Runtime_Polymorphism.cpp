#include <iostream>
using namespace std;

class Account {
protected:
    double balance, rate;
public:
    Account(double b, double r) : balance(b), rate(r) {}
    virtual double calculateInterest() = 0;
    virtual ~Account() {}
    void display() {
        double interest = calculateInterest();
        cout << "Interest = " << interest << endl;
        cout << "Final Balance = " << balance + interest;
    }
};

class SavingsAccount : public Account {
public:
    SavingsAccount(double b, double r) : Account(b, r) {}
    double calculateInterest() override {
        return balance * rate / 100;
    }
};

class CurrentAccount : public Account {
public:
    CurrentAccount(double b, double r) : Account(b, r) {}
    double calculateInterest() override {
        return 0; // Current account: no interest in this example.
    }
};

class FixedDepositAccount : public Account {
public:
    FixedDepositAccount(double b, double r) : Account(b, r) {}
    double calculateInterest() override {
        return balance * rate / 100;
    }
};

int main() {
    string type;
    double balance, rate;
    cin >> type >> balance >> rate;

    if (type == "Savings") {
        SavingsAccount a(balance, rate); a.display();
    } else if (type == "Current") {
        CurrentAccount a(balance, rate); a.display();
    } else if (type == "FixedDeposit") {
        FixedDepositAccount a(balance, rate); a.display();
    } else {
        cout << "Invalid account type";
    }
    return 0;
}