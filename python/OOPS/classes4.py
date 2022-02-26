class Battery:
    def __init__(self,battery_size):
        self.battery_size=battery_size
    def battery(self):
        print(f"The car has {self.battery_size} kWh battery size")


class Car(Battery):
    def __init__(self,name,model,year):
        super().__init__(battery_size=75)
        self.name=name
        self.model=model
        self.year=year
        self.odometer_reading=4 
    def setData(self):
        print(f"{self.name} {self.model} {self.year}")

class Electrical(Car):
    def __init__(self,name,model,year):
        super().__init__(name,model,year)
    #     self.battery_size=75
    # def describe_battery(self):
    #     print(f"This car has a {self.battery_size} kWh battery")

    
tesla=Electrical('Tesla','XVIU','2019')
tesla.setData()
tesla.battery()
#tesla.describe_battery()
