
class Animal {
    protected String gender;
    protected String diet;

    public Animal(String gender, String diet) {
        this.gender = gender;
        this.diet = diet;
    }

    public String getGender() {
        return gender;
    }

    public void setGender(String gender) {
        this.gender = gender;
    }

    public String getDiet() {
        return diet;
    }

    public void setDiet(String diet) {
        this.diet = diet;
    }

    public void display() {
        System.out.println("ANIMAL");
        displayInfo();
    }

    public void displayInfo() {
        System.out.println("> Gender: " + gender);
        System.out.println("> Diet: " + diet);
    }
}