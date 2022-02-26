class Restaurant:
 def __init__(self,name,cuisine_type):
    self.name=name
    self.cuisine_type=cuisine_type

 def describe_restaurant(self):
     print(f"The name of the restaurant is {self.name}")
     print(f"Here the cuisine type is {self.cuisine_type}")
 def open_restaurant(self):
     print(f"The restaurant is open")


rest1=Restaurant("Parag",'Continental')

print(f"The restaurant {rest1.name} serves {rest1.cuisine_type} type")
rest1.describe_restaurant()
rest1.open_restaurant()
#print(f"The restaurant{rest1.name} serves {rest1.cuisine_type} type")