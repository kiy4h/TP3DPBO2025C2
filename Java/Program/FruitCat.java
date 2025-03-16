
class FruitCat extends PetCat {
    private boolean isCrying;
    private Fruit fruit;

    public FruitCat(String gender, String toy, String name, String fruitName, String fruitColor) {
        super(gender, toy, name);
        this.fruit = new Fruit(fruitName, fruitColor) {
        };
        this.isCrying = false;
    }

    public void setIsCrying(boolean crying) {
        this.isCrying = crying;
    }

    public boolean getIsCrying() {
        return isCrying;
    }

    @Override
    public void display() {
        System.out.println("FRUITCAT");
        displayInfo();
    }

    @Override
    public void displayInfo() {
        super.displayInfo();
        System.out.println("> Crying: " + (isCrying ? "Yes" : "No"));
        fruit.displayInfo();
    }
}