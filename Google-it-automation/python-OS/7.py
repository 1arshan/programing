import csv
"""data=[["123","435"],["764","43424"]]
#data =csv.reader()
with open("new.csv","w") as file_csv:
    writer=csv.writer(file_csv)
    writer.writerows(data)"""

users=[{"name":"arshan","username":"1arshan","department":"IT"},
        {"name":"imran","username":"imraan","department":"mech"},
        {"name":"ashish","username":"hish","department":"elec"},
        ]

keys =["name","username","department"]
with open("new.csv","w")as by_department:
    writer=csv.DictWriter(by_department,fieldnames=keys)
    writer.writeheader()
    writer.writerows(users)