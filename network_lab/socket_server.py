#! /usr/bin/env python2.7
import socket


def server_program():
    host = socket.gethostname()
    port = 5000

    server_socket = socket.socket()  
    
    server_socket.bind((host, port))  

    
    server_socket.listen(5)
    conn, address = server_socket.accept() 
    print("Connection from: " + str(address))
    while True:
        data = conn.recv(1024).decode()
        if not data:
            break
        print("from connected user: " + str(data))
        #data = input(' -> ')
        data ="receive"
        conn.send(data.encode()) 
        #while message.lower().strip() != 'bye':
        #client_socket.send(message.encode()) 
        #data = client_socket.recv(1024).decode()  

        #print('Received from server: ' + data) 

        #message = raw_input(" -> ")  

    conn.close()  


if __name__ == '__main__':
    server_program()
