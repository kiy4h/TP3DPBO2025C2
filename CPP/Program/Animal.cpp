#pragma once
#include <iostream>
#include <string>
using namespace std;

class Animal {
protected:
    string gender;
    string diet;

public:
    Animal(const string &g, const string &d) : gender(g), diet(d) {}

    void setGender(const string &g) { gender = g; }
    string getGender() const { return gender; }

    void setDiet(const string &d) { diet = d; }
    string getDiet() const { return diet; }

    virtual void display() const {
        cout << "ANIMAL\n";
        displayInfo();
    }

    virtual void displayInfo() const {
        cout << "> Gender: " << gender << endl;
        cout << "> Diet: " << diet << endl;
    }

    virtual ~Animal() {}
};
