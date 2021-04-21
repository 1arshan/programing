class ClassA:
    __param1=200
    def __init__(self):
        self.__param1=100

    def method1(self,v):
        ClassA.__param1=(ClassA.__param1+1)+self.__param1+v

    @staticmethod
    def method2():
        print(ClassA.__param1+1)

obj1=ClassA()
obj1.method1(0)

obj2=ClassA()
obj2.method1(1)
ClassA.method2()
