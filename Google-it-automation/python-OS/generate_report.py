#!/usr/bin/env python3
import csv
import os

def read_employees(csv_file_location):
    csv.register_dialect('empDialect', skipinitialspace=True, strict=True)
    employee_file = csv.DictReader(open(csv_file_location), dialect = 'empDialect')
    employee_list = []
    individual_data={}
    for data in employee_file:
        for key,value in data.items():
            individual_data[key]=value
        x = dict(reversed(list(individual_data.items())))
        employee_list.append(x)
    return employee_list

employee_list=read_employees("/home/arshan/Documents/programing/Google-it-automation/data/employees.csv")
#print(employee_list)

def write_report(dictionary, report_file):
    