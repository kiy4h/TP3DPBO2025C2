
public class Main {
    public static void main(String[] args) {
        Cat[] cats = {
                new Cat("Female", "Carnivore", "Siamese", 4, 6, false),
                new PetCat("Male", "Yarn", "Rizzly"),
                new Cheetah("Female", 112.65)
        };

        System.out.println("~~~ LIST OF CATS ~~~");
        for (int i = 0; i < cats.length; i++) {
            System.out.print((i + 1) + ". ");
            cats[i].display();
            System.out.println();
        }

        CatOwner[] owners = {
                new CatOwner("Key"),
                new CatOwner("Kiki")
        };

        owners[1].addCat(new PetCat("Female", "pompom", "Cuddly"));
        owners[1].addCat(new FruitCat("Female", "Yarn", "lil mochi", "Banana", "Yellow"));

        System.out.println("~~~ LIST OF CAT OWNERS ~~~");
        for (int i = 0; i < owners.length; i++) {
            System.out.println(">>> Owner [" + (i + 1) + "] <<<");
            owners[i].display();
            System.out.println();
        }

        System.out.println("TEST FRUIT OBJECT");
        Fruit apple = new Fruit("Apple", "Red") {
        };
        apple.displayInfo();
    }
}
