def fun(intput_list,index):
    try:
        #print("Dasdas")
        output_list=[0]*len(intput_list)
        #print("Dasdas")
        #print(intput_list[0])
        output_list[index]= intput_list[index]/int(intput_list[index+1])
        #print("Dasdas")
        #print(output_list[index])
        return output_list
    except ValueError:
        print("Invalid value")
    except ZeroDivisionError :
        print("Divison by zero")
    #except IndexError:
     #   print("abc")
    finally:
        print("End  of function")

try:
    list1 =[2,4,2,8,7]
    list2=fun(list1,4)
except TypeError:
    print("Invalid Type")
except IndexError:
    print("Invalid Indedx")
finally:
    print("Eind of program")