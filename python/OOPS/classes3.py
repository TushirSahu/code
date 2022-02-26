class Car:
    def __init__(self,model,make,year):
        self.make=make
        self.model=model
        self.year=year
        self.odometer_reading=4 #initial reading 

    def update_odometer(self,mileage):
        if(mileage>=self.odometer_reading):
            self.odometer_reading=mileage
        else:
            print("You cannot roll back the odometer")
        
    
    def read_odometer(self):
        print(f"This car has {self.odometer_reading} miles on it")
    def setData(self):
        print(f"{self.model} {self.make} {self.year}")
    
    
    


car1=Car('A4',"Audi",2019)

car1.setData()
car1.update_odometer(0)

car1.read_odometer()