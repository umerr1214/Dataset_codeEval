#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void convertToUppercase(std::string& str) {
    if (!str.empty()) {
        for (size_t i = 0; i < str.length(); i++) {
            str[i] = toupper(str[i]);
        }
    }
}

int main() {
    string s;
    
    cout << "Enter a string: ";
    getline(cin, s);
    
    convertToUppercase(s);
    
    cout << "Uppercase string: " << s << endl;
    
    return 0;
}