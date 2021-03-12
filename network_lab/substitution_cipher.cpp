#include<iostream>
#include <cstring>
#include <iostream> 
#include <string>
using namespace std;

int main() {
    int key;
    string data;
    cout << "Enter the data to be ciphered: ";
     getline(cin, data); 
    cout << "Enter a numeric key: ";
    cin >> key;
    int dataLen = data.length();
    // Cipher
    for (int i = 0; i < dataLen; i++) {
        if (isupper(data[i])) {
            int a = (data[i] - 'A' + key) % 26;
            data[i] = (char)(a + 'A');
        } else if (islower(data[i])) {
            int a = (data[i] - 'a' + key) % 26;
            data[i] = (char)(a + 'a');
        }
    }
    cout << "The ciphered string is: " << data << '\n';
    // Decipher
    for (int i = 0; i < dataLen; i++) {
        if (isupper(data[i])) {
            int a = (data[i] - 'A' - key);
            if (a < 0) {
                a += 26;
            }
            data[i] = (char)(a + 'A');
        } else if (islower(data[i])) {
            int a = (data[i] - 'a' - key);
            if (a < 0) {
                a += 26;
            }
            data[i] = (char)(a + 'a');
        }
    }
    cout << "The deciphered string is: " << data << '\n';
}