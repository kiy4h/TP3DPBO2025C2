#pragma once
#include "Cat.cpp"

class PetCat : public Cat {
private:
    string name;
    string favoriteToy;

public:
    PetCat(const string &g, const string &toy, const string &n)
        : Cat(g, "Carnivore", "Cat Ultramix", 5, 7, false), favoriteToy(toy), name(n) {}

    void setName(const string &n) { name = n; }
    string getName() const { return name; }

    void setFavoriteToy(const string &toy) { favoriteToy = toy; }
    string getFavoriteToy() const { return favoriteToy; }

    void display() const override {
        cout << "PETCAT\n";
        displayInfo();
    }

    void displayInfo() const override {
        cout << "> Name: " << name << endl;
        cout << "> Favorite Toy: " << favoriteToy << endl;
        Cat::displayInfo();
    }
};