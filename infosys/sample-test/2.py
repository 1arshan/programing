import abc 

class Shape(metaclass=abc.ABCMeta):
    def __init__(self):
        print("I am an inti")

    @abc.abstractmethod
    def draw_shape(self):
        pass
    @abc.abstractmethod
    def set_color(self):
        pass

class Circle(Shape):
    def draw_shape(self):
        print("Draw Circle")
    def set_color(self):
        print("sasas")

obj1 =Circle()
obj1.draw_shape()
