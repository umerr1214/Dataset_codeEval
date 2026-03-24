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
    string text = "hello world";
    cout << "Original: " << text << endl;
    convertToUppercase(text);
    cout << "Uppercase: " << text << endl;
    
    return 0;
}