#include <iostream>
#include <exception>
using namespace std;

class InvalidQuantityException : public exception {
public:
    const char* what() const noexcept override {
        return "Invalid quantity";
    }
};
class InsufficientStockException : public exception {
public:
    const char* what() const noexcept override {
        return "Insufficient Stock";
    }
};
class InvalidPriceException : public exception {
public:
    const char* what() const noexcept override {
        return "Invalid product price";
    }
};

int main() {
    double price;
    int quantity, stock;
    cin >> price >> quantity >> stock;

    try {
        if (price <= 0) throw InvalidPriceException();
        if (quantity <= 0) throw InvalidQuantityException();
        if (quantity > stock) throw InsufficientStockException();

        cout << "Order Confirmed\n";
        cout << "Total Amount = " << price * quantity << endl;
        cout << "Remaining Stock = " << stock - quantity;
    } catch (const exception &e) {
        cout << "Exception: " << e.what();
    }
    return 0;
}