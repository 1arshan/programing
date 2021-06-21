#w: write
#r+ read+write
#a : append

file =open('spider.txt')
print(file.readline())
print(file.read())

with open("spider.txt") as file:    #as a string
    for line in file:
        print(line.strip().upper())