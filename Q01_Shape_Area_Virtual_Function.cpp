#include <iostream>
#include <iomanip>
using namespace std;

class Shape {
public:
    virtual double area() = 0;
    virtual ~Shape() {}
};

class Circle : public Shape {
    double radius;
public:
    Circle(double r) { radius = r; }
    double area() override { return 3.14 * radius * radius; }
};

class Rectangle : public Shape {
    double length, breadth;
public:
    Rectangle(double l, double b) {
        length = l;
        breadth = b;
    }
    double area() override { return length * breadth; }
};

int main() {
    string type;
    cin >> type;

    Shape *shape;
    if (type == "Circle") {
        double r;
        cin >> r;
        Circle c(r);
        shape = &c;
        cout << fixed << setprecision(2);
        cout << "Area of Circle = " << shape->area();
    } else if (type == "Rectangle") {
        double l, b;
        cin >> l >> b;
        Rectangle r(l, b);
        shape = &r;
        cout << "Area of Rectangle = " << shape->area();
    } else {
        cout << "Invalid shape";
    }
    return 0;
}