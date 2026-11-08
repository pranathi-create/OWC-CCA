#include <iostream>
#include <exception>
using namespace std;

class InsufficientBalanceException : public exception {
public:
    const char* what() const noexcept override {
        return "Insufficient balance.";
    }
};

class BankAccount {
    double balance;
public:
    BankAccount(double b) : balance(b) {}
    void withdraw(double amount) {
        if (amount > balance)
            throw InsufficientBalanceException();
        balance -= amount;
        cout << "Withdrawal Successful\nRemaining Balance = " << balance;
    }
};

int main() {
    double balance, amount;
    cin >> balance >> amount;
    try {
        BankAccount account(balance);
        account.withdraw(amount);
    } catch (const InsufficientBalanceException &e) {
        cout << "Exception: " << e.what();
    }
    return 0;
}