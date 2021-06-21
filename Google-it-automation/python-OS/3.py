#!/usr/bin/env python3
import requests
import socket

from requests.models import Response



def check_localhost():
        localhost = socket.gethostbyname('localhost')
        #print("localhost",localhost)   
        return localhost=="127.0.0.1"

def check_connectivity():
        request = requests.get("https://www.google.com")
        #print(type(request))
        #print("request",request.status_code)
        return request.status_code==200

#print(check_localhost())
print(check_connectivity())
