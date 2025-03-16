from Cat import Cat
from PetCat import PetCat
from Cheetah import Cheetah
from FruitCat import FruitCat
from CatOwner import CatOwner


def main():  # main program
    cats = [
        Cat("Female", "Carnivore", "Siamese", 4, 6, False),
        PetCat("Male", "Yarn", "Rizzly"),
        Cheetah("Female", 112.65)
    ]

    print("~~~ LIST OF CATS ~~~")
    for i, cat in enumerate(cats, 1):
        print(f"{i}. ", end="")
        cat.display()
        print()

    owners = [CatOwner("Key"), CatOwner("Kiki")]

    owners[1].add_cat(PetCat("Female", "pompom", "Cuddly"))
    owners[1].add_cat(
        FruitCat("Female", "Yarn", "lil mochi", "Banana", "Yellow"))

    print("~~~ LIST OF CAT OWNERS ~~~")
    for i, owner in enumerate(owners, 1):
        print(f">>> Owner [{i}] <<<")
        owner.display()
        print()

# run the program
if __name__ == "__main__":
    main()
