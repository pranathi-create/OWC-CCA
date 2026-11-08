#include <iostream>
#include <string>
using namespace std;

class Vehicle {
public:
    virtual void displayDetails() = 0;
    virtual ~Vehicle() {}
};

class Bike : public Vehicle {
    string brand, model;
public:
    Bike(string b, string m) : brand(b), model(m) {}
    void displayDetails() override {
        cout << "Vehicle: Bike\nBrand: " << brand
             << "\nModel: " << model;
    }
};

class Car : public Vehicle {
    string brand, model;
public:
    Car(string b, string m) : brand(b), model(m) {}
    void displayDetails() override {
        cout << "Vehicle: Car\nBrand: " << brand
             << "\nModel: " << model;
    }
};

class Bus : public Vehicle {
    string brand, model;
public:
    Bus(string b, string m) : brand(b), model(m) {}
    void displayDetails() override {
        cout << "Vehicle: Bus\nBrand: " << brand
             << "\nModel: " << model;
    }
};

int main() {
    string type, brand, model;
    cin >> type >> brand >> model;

    Vehicle *v = nullptr;
    if (type == "Bike") {
        Bike obj(brand, model);
        v = &obj;
        v->displayDetails();
    } else if (type == "Car") {
        Car obj(brand, model);
        v = &obj;
        v->displayDetails();
    } else if (type == "Bus") {
        Bus obj(brand, model);
        v = &obj;
        v->displayDetails();
    } else {
        cout << "Invalid vehicle type";
    }
    return 0;
}