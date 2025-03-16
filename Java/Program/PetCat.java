
class PetCat extends Cat {
    private String name;
    private String favoriteToy;

    public PetCat(String gender, String favoriteToy, String name) {
        super(gender, "Carnivore", "Cat Ultramix", 5, 7, false);
        this.name = name;
        this.favoriteToy = favoriteToy;
    }

    public void display() {
        System.out.println("PETCAT");
        displayInfo();
    }

    public void displayInfo() {
        System.out.println("> Name: " + name);
        System.out.println("> Favorite Toy: " + favoriteToy);
        super.displayInfo();
    }
}