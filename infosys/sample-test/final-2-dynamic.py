class knapsack:
    def __init__(self,l):
        self.l=l
        l=l.sort()
    
    def sum_of_element(self):
        self.sum=0
        for x in self.l:
            self.sum +=x
        self.sum =int(self.sum/2)

    def dyanmic_matrix(self):
        self.prev_list=[0 for x in range(self.sum+1)]
        self.hor_list=[0 for x in range(self.sum+1)]
        #print(t.prev_list)
        for n in self.l:
            for i in range(1,self.sum+1):
                if n <=i:
                    if self.prev_list[i-n]+n >=self.prev_list[i]:
                        """if n==4:
                            print("self.prev_list[i-n]:",self.prev_list[i-n]+n)"""
                        self.hor_list[i]=self.prev_list[i-n]+n
                        if self.hor_list[i]==self.sum:
                            #print(self.hor_list)
                            break
                    else:
                        self.hor_list[i]=self.prev_list[i]
                else:
                    self.hor_list[i]=self.prev_list[i]
            self.prev_list=self.hor_list
            print(self.hor_list)



#l=[8,7,100,28,67,68,41,67,1]
l=[11,3,4,7,6,5]
t =knapsack(l)
t.sum_of_element()
t.dyanmic_matrix()
#print(t.sum)
#print(t.hor_list)
#print(t.prev_list)