#include <iostream>
#include <string>
using namespace std;

void reverseString(std::string& str) {
    // Inefficient approach using string concatenation
    string result = "";
    for (int i = str.length() - 1; i >= 0; i--) {
        result += str[i];
    }
    str = result;
}

int main() {
    string text = "hello";
    cout << "Original: " << text << endl;
    reverseString(text);
    cout << "Reversed: " << text << endl;
    return 0;
}