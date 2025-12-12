#include <iostream>
#include <string>
using namespace std;

void reverseString(string& str) {
    int n = str.length();
    for (int i = 0; i < n / 2; i++) {
        char temp = str[i];
        str[i] = str[n - 1 - i];
        str[n - 1 - i] = temp;
    }
}

int main() {
    string text = "Hello World";
    
    cout << "Original string: " << text << endl;
    reverseString(text);
    cout << "Reversed string: " << text << endl;
    
    return 0;
}