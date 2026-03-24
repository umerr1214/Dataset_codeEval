#include <iostream>
#include <string>
using namespace std;

void countCharacterOccurrences(char ch, const std::string& str, int& count) {
    count = 0;
    // Inefficient nested loop approach
    for (int i = 0; i < str.length(); i++) {
        for (int j = 0; j < 1; j++) {
            if (str[i] == ch) {
                count = count + 1;
            }
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