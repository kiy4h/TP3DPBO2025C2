class Fruit:
    def __init__(self, name, color):
        self.name = name
        self.color = color

    def display(self):
        print("FRUIT")
        self.display_info()

    def display_info(self):
        print(f"> Fruit Name: {self.name}")
        print(f"> Fruit Color: {self.color}")
