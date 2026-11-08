#include <iostream>
using namespace std;

template <class T>
void sortArray(T arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

template <class T>
void display(T arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

int main() {
    int n;
    cin >> n;
    int choice;
    cout << "Enter 1 for integers or 2 for floating-point values: ";
    cin >> choice;

    if (choice == 1) {
        int arr[100];
        for (int i = 0; i < n; i++) cin >> arr[i];
        sortArray(arr, n);
        cout << "Sorted Array:\n";
        display(arr, n);
    } else if (choice == 2) {
        double arr[100];
        for (int i = 0; i < n; i++) cin >> arr[i];
        sortArray(arr, n);
        cout << "Sorted Array:\n";
        display(arr, n);
    } else {
        cout << "Invalid choice";
    }
    return 0;
}