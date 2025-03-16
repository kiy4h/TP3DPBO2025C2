import java.util.ArrayList;
import java.util.List;

class CatOwner {
    private String ownerName;
    private List<PetCat> cats = new ArrayList<>();

    public CatOwner(String ownerName) {
        this.ownerName = ownerName;
    }

    public void addCat(PetCat cat) {
        cats.add(cat);
    }

    public void display() {
        System.out.println("Owner Name: " + ownerName);
        System.out.println(ownerName + "'s Pet Cats:");
        if (cats.isEmpty()) {
            System.out.println("No cats found.");
        } else {
            for (int i = 0; i < cats.size(); i++) {
                System.out.print((i + 1) + ". ");
                cats.get(i).display();
            }
        }
    }
}