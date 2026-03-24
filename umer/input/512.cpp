#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void convertToUppercase(std::string& str) {
    for (int i = 0; i < str.length(); i++) {
        str[i] = tolower(str[i]);  // Wrong: using tolower instead of toupper
    }
}

int main() {
    string text = "hello world";
    cout << "Original: " << text << endl;
    convertToUppercase(text);
    cout << "Uppercase: " << text << endl;
    
    return 0;
}