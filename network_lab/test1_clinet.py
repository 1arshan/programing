#! /usr/bin/env python2.7
import socket


def client_program1():
    host = socket.gethostname() 
    port = 5000 

    client_socket = socket.socket() 
    client_socket.connect((host, port))  

    #message = input(" -> ")
    message = raw_input(" -> ") 

    while True:
        client_socket.send(message.encode()) 
        data = client_socket.recv(1024).decode()  

        print('Received from server: ' + data) 

        message = raw_input(" -> ")  

    client_socket.close()  


if __name__ == '__main__':
    client_program1()
