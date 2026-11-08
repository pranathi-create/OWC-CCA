#include <iostream>
#include <exception>
using namespace std;

class InvalidPatientAgeException : public exception {
public:
    const char* what() const noexcept override {
        return "Invalid Patient Age";
    }
};
class InvalidQuantityException : public exception {
public:
    const char* what() const noexcept override {
        return "Invalid Quantity";
    }
};
class NegativeBillException : public exception {
public:
    const char* what() const noexcept override {
        return "Negative billing amount";
    }
};

int main() {
    int age, medicineQuantity;
    double consultation, lab, medicineRate;
    cin >> age >> consultation >> lab >> medicineRate >> medicineQuantity;

    try {
        if (age < 0 || age > 120) throw InvalidPatientAgeException();
        if (medicineQuantity < 0) throw InvalidQuantityException();

        double medicineTotal = medicineRate * medicineQuantity;
        double total = consultation + lab + medicineTotal;

        if (consultation < 0 || lab < 0 || medicineRate < 0 || total < 0)
            throw NegativeBillException();

        cout << "Total Hospital Bill = " << total << endl;
        cout << "Bill Generated Successfully";
    } catch (const exception &e) {
        cout << "Exception: " << e.what();
    }
    return 0;
}