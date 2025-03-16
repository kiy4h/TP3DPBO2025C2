#pragma once
#include "PetCat.cpp"
#include <vector>

class CatOwner {
    string ownerName;
    vector<PetCat *> cats;

public:
    CatOwner(const string &name) : ownerName(name) {}

    void addCat(PetCat *cat) {
        cats.push_back(cat);
    }

    void showCats() const {
        cout << ownerName << "'s Pet Cats: " << endl;
        for (int i = 0; i < cats.size(); i++) {
            cout << i + 1 << ". ";
            cats[i]->display();
            cout << endl;
        }
        if (cats.size() == 0) {
            cout << "No cats found." << endl;
        }
    }

    void display() const {
        cout << "Owner Name: " << ownerName << endl;
        showCats();
    }

    ~CatOwner() {
        for (auto cat : cats) {
            delete cat;
        }
    }
};