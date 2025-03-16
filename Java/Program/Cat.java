
class Cat extends Animal {
    protected String breed;
    protected int clawSharpness;
    protected int nightVision;
    protected boolean roaringAbility;

    public Cat(String gender, String diet, String breed, int clawSharpness, int nightVision, boolean roaringAbility) {
        super(gender, diet);
        this.breed = breed;
        this.clawSharpness = clawSharpness;
        this.nightVision = nightVision;
        this.roaringAbility = roaringAbility;
    }

    public void display() {
        System.out.println("CAT");
        displayInfo();
    }

    public void displayInfo() {
        super.displayInfo();
        System.out.println("> Breed: " + breed);
        System.out.println("> Claw Sharpness: " + clawSharpness);
        System.out.println("> Night Vision: " + nightVision);
        System.out.println("> Roaring Ability: " + (roaringAbility ? "Yes" : "No"));
    }
}
