class Animal:
    def __init__(self, gender, diet):
        self.gender = gender
        self.diet = diet

    def set_gender(self, gender):
        self.gender = gender

    def get_gender(self):
        return self.gender

    def set_diet(self, diet):
        self.diet = diet

    def get_diet(self):
        return self.diet

    def display(self):
        print("ANIMAL")
        self.display_info()

    def display_info(self):
        print(f"> Gender: {self.gender}")
        print(f"> Diet: {self.diet}")
