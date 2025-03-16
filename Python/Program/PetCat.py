from Cat import Cat


class PetCat(Cat):
    def __init__(self, gender, favorite_toy, name):
        super().__init__(gender, "Carnivore", "Cat Ultramix", 5, 7, False)
        self.name = name
        self.favorite_toy = favorite_toy

    def display(self):
        print("PETCAT")
        self.display_info()

    def display_info(self):
        print(f"> Name: {self.name}")
        print(f"> Favorite Toy: {self.favorite_toy}")
        super().display_info()
