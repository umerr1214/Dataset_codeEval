#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void convertToUppercase(std::string str) {
    for (int i = 0; i < str.length(); i++) {
        str[i] = toupper(str[i]);
    }
}

int main() {
    string text;
    
    cout << "Enter a string: ";
    getline(cin, text);
    
    convertToUppercase(text);
    
    cout << "Uppercase string: " << text << endl;
    
    return 0;
}