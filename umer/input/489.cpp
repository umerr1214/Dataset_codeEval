#include <iostream>
#include <string>
using namespace std;

void countCharacterOccurrences(char ch, const std::string& str, int count) {
    count = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ch) {
            count++;
        }
    }
}

int main() {
    char character = 'l';
    string text = "hello world";
    int occurrences;
    
    cout << "Character: " << character << endl;
    cout << "String: " << text << endl;
    countCharacterOccurrences(character, text, occurrences);
    cout << "Count: " << occurrences << endl;
    
    return 0;
}