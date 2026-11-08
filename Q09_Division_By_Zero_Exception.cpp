#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    try {
        if (b == 0)
            throw runtime_error("Division by zero is not allowed.");
        cout << "Result = " << (double)a / b;
    } catch (const exception &e) {
        cout << "Exception: " << e.what();
    }
    return 0;
}