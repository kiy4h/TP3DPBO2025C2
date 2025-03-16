#include "Cat.cpp"
#include "CatOwner.cpp"
#include "Cheetah.cpp"
#include "FruitCat.cpp"
#include "PetCat.cpp"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    Cat *cats[] = {
        new Cat("Female", "Carnivore", "Siamese", 4, 6, false),
        new PetCat("Male", "Yarn", "Rizzly"),
        new Cheetah("Female", 112.65)};
    cout << "~~~ LIST OF CATS ~~~\n";
    for (int i = 0; i < 3; i++) {
        cout << i + 1 << ". ";
        cats[i]->display();
        cout << endl;
    }

    CatOwner owners[] = {CatOwner("Key"), CatOwner("Kiki")};

    owners[1].addCat(new PetCat("Female", "pompom", "Cuddly"));
    owners[1].addCat(new FruitCat("Female", "Yarn", "lil mochi", "Banana", "Yellow"));

    cout << "~~~ LIST OF CAT OWNERS ~~~\n";
    for (int i = 0; i < 2; i++) {
        cout << ">>> Owner [" << i + 1 << "] <<<" << endl;
        owners[i].display();
        cout << endl;
    }

    return 0;
}
