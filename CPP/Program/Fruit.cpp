#pragma once
#include <iostream>
#include <string>
using namespace std;

class Fruit {
protected:
    string name;
    string color;

public:
    Fruit(const string &n, const string &c) : name(n), color(c) {}

    void setName(const string &n) { name = n; }
    string getName() const { return name; }

    void setColor(const string &c) { color = c; }
    string getColor() const { return color; }

    void display() const {
        cout << "FRUIT\n";
        displayInfo();
    }

    void displayInfo() const {
        cout << "> Fruit Name: " << name << endl;
        cout << "> Fruit Color: " << color << endl;
    }
};
