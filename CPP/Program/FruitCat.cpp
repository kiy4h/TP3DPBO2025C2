#pragma once
#include "Fruit.cpp"
#include "PetCat.cpp"
#include <iostream>
#include <string>

using namespace std;

class FruitCat : public PetCat, public Fruit {
private:
    bool isCrying = false;

public:
    FruitCat(const string &g, const string &toy, const string &n, const string &fruitName, const string &fruitColor)
        : PetCat(g, toy, n), Fruit(fruitName, fruitColor) {}

    void setIsCrying(bool crying) { isCrying = crying; }
    bool getIsCrying() const { return isCrying; }

    void display() const override {
        cout << "FRUITCAT\n";
        displayInfo();
    }

    void displayInfo() const override {
        PetCat::displayInfo();
        cout << "> Crying: " << (isCrying ? "Yes" : "No") << endl;
        Fruit::displayInfo();
    }
};