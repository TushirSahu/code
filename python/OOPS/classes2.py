class dog:
    def __init__(self,name,age):
        self.name=name
        self.age=age
    def sit(self):
        print(f"{self.name} is now sitting")
    def roll_over(self):
        print(f"{self.name} rolled over")


dog1=dog('bozzo',19)
print(f"{dog1.name} is {dog1.age} years old")
dog1.sit()
dog1.roll_over()
