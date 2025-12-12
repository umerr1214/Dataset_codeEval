#include <iostream>
#include <string>
using namespace std;

/**
 * Reverses the contents of a string using pass-by-reference
 * @param inputString Reference to the string to be reversed
 */
void reverseString(string& inputString) {
    // Handle empty string case
    if (inputString.empty()) {
        return;
    }
    
    int stringLength = inputString.length();
    
    // Swap characters from both ends moving towards the center
    for (int currentIndex = 0; currentIndex < stringLength / 2; currentIndex++) {
        // Store the character from the beginning
        char temporaryCharacter = inputString[currentIndex];
        
        // Move character from the end to the beginning
        inputString[currentIndex] = inputString[stringLength - 1 - currentIndex];
        
        // Move the stored character to the end
        inputString[stringLength - 1 - currentIndex] = temporaryCharacter;
    }
}

int main() {
    string textToReverse = "Hello World";
    
    // Display original string
    cout << "Original string: " << textToReverse << endl;
    
    // Reverse the string
    reverseString(textToReverse);
    
    // Display reversed string
    cout << "Reversed string: " << textToReverse << endl;
    
    return 0;
}