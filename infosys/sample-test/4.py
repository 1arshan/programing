class Vehicle():
    def __init__(self,color):
        self.color=color

class FourWheeler(Vehicle):
    def __init__(self,no_of_gears,color):
        super().__init__(color)
        self.no_of_gears=no_of_gears

class TwoWheeler(Vehicle):
    def __init__(self,engine_cc):
        super().__init__("Red")
        self.engine_cc=engine_cc
        self.color="Blue"

m=FourWheeler(4,"red")
print(m.color,m.no_of_gears)
a =TwoWheeler(80)
print(a.color,a.engine_cc)