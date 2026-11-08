#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int index;
    cin >> index;

    try {
        if (index < 0 || index >= 5)
            throw out_of_range("Array index out of bounds.");
        cout << "Array element = " << arr[index];
    } catch (const out_of_range &e) {
        cout << "Exception: " << e.what();
    }
    return 0;
}