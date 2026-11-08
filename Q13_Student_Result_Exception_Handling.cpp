#include <iostream>
#include <exception>
using namespace std;

class InvalidMarksException : public exception {
public:
    const char* what() const noexcept override {
        return "Marks must be between 0 and 100.";
    }
};

int main() {
    int marks[5], total = 0;
    try {
        for (int i = 0; i < 5; i++) {
            cin >> marks[i];
            if (marks[i] < 0 || marks[i] > 100)
                throw InvalidMarksException();
            total += marks[i];
        }

        double average = total / 5.0;
        cout << "Total = " << total << endl;
        cout << "Average = " << average << endl;

        if (average >= 80) cout << "Grade = A";
        else if (average >= 70) cout << "Grade = B";
        else if (average >= 60) cout << "Grade = C";
        else if (average >= 40) cout << "Grade = D";
        else cout << "Grade = F";
    } catch (const InvalidMarksException &e) {
        cout << "Exception: " << e.what();
    }
    return 0;
}