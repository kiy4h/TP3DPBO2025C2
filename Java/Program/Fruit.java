
abstract class Fruit {
    protected String name;
    protected String color;

    public Fruit(String name, String color) {
        this.name = name;
        this.color = color;
    }

    public String getName() {
        return name;
    }

    public String getColor() {
        return color;
    }

    public void displayInfo() {
        System.out.println("> Fruit Name: " + name);
        System.out.println("> Fruit Color: " + color);
    }
}