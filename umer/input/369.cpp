#include <iostream>
#include <string>
using namespace std;

void countCharacterOccurrences(char ch, const string& str, int& count) {
    count = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ch) {
            count++;
        }
    }
}

int main() {
    string text = "Hello World";
    char character = 'l';
    int occurrences;
    
    cout << "String: " << text;
    cout << "Character: " << character;
    countCharacterOccurrences(character, text, occurrences);
    cout << "Occurrences: " << occurrences;
    
    return 0;
}