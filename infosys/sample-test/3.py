class Car:
    def __init__(self,car_id,car_name):
        self.__car_id=car_id
        self.car_name=car_name

car1=Car(123,"VOLVO")
print(car1.__car_id,car1.car_name)