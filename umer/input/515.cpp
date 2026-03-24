#include <iostream>
#include <string>
using namespace std;

void convertToUppercase(std::string& str) {
    // Inefficient manual conversion without using toupper
    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;  // Manual ASCII conversion
        }
    }
}

int main() {
    string text = "hello world";
    cout << "Original: " << text << endl;
    convertToUppercase(text);
    cout << "Uppercase: " << text << endl;
    
    return 0;
}