#include <iostream>
#include <exception>
using namespace std;

class IncorrectPINException : public exception {
public:
    const char* what() const noexcept override {
        return "Incorrect PIN.";
    }
};

int main() {
    const int correctPIN = 1234;
    int pin, attempts = 0;

    while (attempts < 3) {
        cin >> pin;
        if (pin == correctPIN) {
            cout << "PIN Verified Successfully";
            return 0;
        }

        attempts++;
        try {
            throw IncorrectPINException();
        } catch (const IncorrectPINException &e) {
            cout << "Exception: " << e.what() << endl;
            if (attempts < 3)
                cout << "Attempts Remaining: " << 3 - attempts << endl;
            else
                cout << "ATM access blocked";
        }
    }
    return 0;
}