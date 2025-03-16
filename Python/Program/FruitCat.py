from PetCat import PetCat
from Fruit import Fruit


class FruitCat(PetCat, Fruit):
    def __init__(self, gender, toy, name, fruit_name, fruit_color):
        PetCat.__init__(self, gender, toy, name)
        Fruit.__init__(self, fruit_name, fruit_color)
        self.is_crying = False

    def set_is_crying(self, crying):
        self.is_crying = crying

    def get_is_crying(self):
        return self.is_crying

    def display(self):
        print("FRUITCAT")
        self.display_info()

    def display_info(self):
        PetCat.display_info(self)
        print(f"> Crying: {'Yes' if self.is_crying else 'No'}")
        Fruit.display_info(self)
