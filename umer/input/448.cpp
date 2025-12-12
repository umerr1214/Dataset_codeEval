#include <iostream>
#include <string>
#include <cstring>
using namespace std;

void printMessage(const string& message) {
    // Robustness Issue: Uses a fixed-size buffer which causes a buffer overflow 
    // if the message is longer than 9 characters. This is unsafe.
    char buffer[10];
    strcpy(buffer, message.c_str());
    cout << buffer << endl;
}