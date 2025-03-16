#pragma once
#include "Cat.cpp"

class Cheetah : public Cat {
private:
    double speed;

public:
    Cheetah(const string &g, double s)
        : Cat(g, "Carnivore", "Cheetah", 8, 10, true), speed(s) {}

    void setSpeed(double s) { speed = s; }
    double getSpeed() const { return speed; }

    void display() const override {
        cout << "CHEETAH\n";
        displayInfo();
    }

    void displayInfo() const override {
        Cat::displayInfo();
        cout << "> Speed: " << speed << " km/h" << endl;
    }
};
