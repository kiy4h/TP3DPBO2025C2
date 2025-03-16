from Cat import Cat


class Cheetah(Cat):
    def __init__(self, gender, speed):
        super().__init__(gender, "Carnivore", "Cheetah", 8, 10, True)
        self.speed = speed

    def display(self):
        print("CHEETAH")
        self.display_info()

    def display_info(self):
        super().display_info()
        print(f"> Speed: {self.speed} km/h")
