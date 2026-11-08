#include <iostream>
using namespace std;

class Payment {
protected:
    double amount, chargeRate;
public:
    Payment(double a, double r) : amount(a), chargeRate(r) {}
    virtual double processPayment() = 0;
    virtual ~Payment() {}
};

class UPIPayment : public Payment {
public:
    UPIPayment(double a) : Payment(a, 0) {}
    double processPayment() override { return amount * chargeRate / 100; }
};

class CardPayment : public Payment {
public:
    CardPayment(double a, double r) : Payment(a, r) {}
    double processPayment() override { return amount * chargeRate / 100; }
};

class NetBankingPayment : public Payment {
public:
    NetBankingPayment(double a, double r) : Payment(a, r) {}
    double processPayment() override { return amount * chargeRate / 100; }
};

int main() {
    string mode;
    double amount, rate = 0;
    cin >> mode >> amount;
    if (mode == "Card" || mode == "NetBanking") cin >> rate;

    Payment *p = nullptr;
    if (mode == "UPI") {
        UPIPayment obj(amount); p = &obj;
        double charge = p->processPayment();
        cout << "Transaction Charge = " << charge << endl;
        cout << "Total Amount = " << amount + charge << endl;
    } else if (mode == "Card") {
        CardPayment obj(amount, rate); p = &obj;
        double charge = p->processPayment();
        cout << "Transaction Charge = " << charge << endl;
        cout << "Total Amount = " << amount + charge << endl;
    } else if (mode == "NetBanking") {
        NetBankingPayment obj(amount, rate); p = &obj;
        double charge = p->processPayment();
        cout << "Transaction Charge = " << charge << endl;
        cout << "Total Amount = " << amount + charge << endl;
    } else {
        cout << "Invalid payment mode";
        return 0;
    }
    cout << "Payment Status = Successful";
    return 0;
}