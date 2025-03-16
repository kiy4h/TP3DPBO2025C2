
class Cheetah extends Cat {
    private double speed;

    public Cheetah(String gender, double speed) {
        super(gender, "Carnivore", "Cheetah", 8, 10, true);
        this.speed = speed;
    }

    public void display() {
        System.out.println("CHEETAH");
        displayInfo();
    }

    public void displayInfo() {
        super.displayInfo();
        System.out.println("> Speed: " + speed + " km/h");
    }
}