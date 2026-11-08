#include <iostream>
using namespace std;

class Payment {
protected:
    double amount;
public:
    Payment(double a) : amount(a) {}
    virtual void makePayment() = 0;
    virtual ~Payment() {}
};

class UPI : public Payment {
public:
    UPI(double a) : Payment(a) {}
    void makePayment() override {
        cout << "Payment Mode: UPI\nAmount Paid = " << amount
             << "\nPayment Successful";
    }
};

class CreditCard : public Payment {
public:
    CreditCard(double a) : Payment(a) {}
    void makePayment() override {
        cout << "Payment Mode: CreditCard\nAmount Paid = " << amount
             << "\nPayment Successful";
    }
};

class Cash : public Payment {
public:
    Cash(double a) : Payment(a) {}
    void makePayment() override {
        cout << "Payment Mode: Cash\nAmount Paid = " << amount
             << "\nPayment Successful";
    }
};

int main() {
    string mode;
    double amount;
    cin >> mode >> amount;

    if (mode == "UPI") {
        UPI p(amount); p.makePayment();
    } else if (mode == "CreditCard") {
        CreditCard p(amount); p.makePayment();
    } else if (mode == "Cash") {
        Cash p(amount); p.makePayment();
    } else {
        cout << "Invalid payment mode";
    }
    return 0;
}