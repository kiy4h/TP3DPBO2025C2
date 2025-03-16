class CatOwner:
    def __init__(self, owner_name):
        self.owner_name = owner_name
        self.cats = []

    def add_cat(self, cat):
        self.cats.append(cat)

    def show_cats(self):
        print(f"{self.owner_name}'s Pet Cats:")
        if not self.cats:
            print("No cats found.")
        for i, cat in enumerate(self.cats, 1):
            print(f"{i}. ", end="")
            cat.display()
            print()

    def display(self):
        print(f"Owner Name: {self.owner_name}")
        self.show_cats()
