from Animal import Animal


class Cat(Animal):
    def __init__(self, gender, diet, breed, claw_sharpness, night_vision, roaring_ability):
        super().__init__(gender, diet)
        self.breed = breed
        self.claw_sharpness = claw_sharpness
        self.night_vision = night_vision
        self.roaring_ability = roaring_ability

    def display(self):
        print("CAT")
        self.display_info()

    def display_info(self):
        super().display_info()
        print(f"> Breed: {self.breed}")
        print(f"> Claw Sharpness: {self.claw_sharpness}")
        print(f"> Night Vision: {self.night_vision}")
        print(f"> Roaring Ability: {'Yes' if self.roaring_ability else 'No'}")
