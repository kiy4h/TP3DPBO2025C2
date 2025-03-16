#pragma once
#include "Animal.cpp"

class Cat : public Animal {
protected:
    string breed;
    int clawSharpness;
    int nightVision;
    bool roaringAbility;

public:
    Cat(const string &g, const string &d, const string &b, int cs, int nv, bool ra)
        : Animal(g, d), breed(b), clawSharpness(cs), nightVision(nv), roaringAbility(ra) {}

    void setBreed(const string &b) { breed = b; }
    string getBreed() const { return breed; }

    void setClawSharpness(int cs) { clawSharpness = cs; }
    int getClawSharpness() const { return clawSharpness; }

    void setNightVision(int nv) { nightVision = nv; }
    int getNightVision() const { return nightVision; }

    void setRoaringAbility(bool ra) { roaringAbility = ra; }
    bool getRoaringAbility() const { return roaringAbility; }

    void display() const override {
        cout << "CAT\n";
        displayInfo();
    }

    void displayInfo() const override {
        Animal::displayInfo();
        cout << "> Breed: " << breed << endl;
        cout << "> Claw Sharpness: " << clawSharpness << endl;
        cout << "> Night Vision: " << nightVision << endl;
        cout << "> Roaring Ability: " << (roaringAbility ? "Yes" : "No") << endl;
    }
};