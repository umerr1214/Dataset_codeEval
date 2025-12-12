#include <iostream>
#include <string>
using namespace std;

/**
 * Counts the number of occurrences of a character within a string using pass-by-reference
 * @param targetCharacter The character to search for
 * @param inputString The string to search within (passed by const reference for efficiency)
 * @param occurrenceCount Reference to store the count of occurrences
 */
void countCharacterOccurrences(char targetCharacter, const string& inputString, int& occurrenceCount) {
    // Initialize count to zero
    occurrenceCount = 0;
    
    // Handle empty string case
    if (inputString.empty()) {
        return;
    }
    
    // Iterate through each character in the string
    for (size_t currentIndex = 0; currentIndex < inputString.length(); currentIndex++) {
        // Check if current character matches the target character
        if (inputString[currentIndex] == targetCharacter) {
            occurrenceCount++;
        }
    }
}

int main() {
    string textToSearch = "Hello World";
    char characterToFind = 'l';
    int numberOfOccurrences;
    
    // Display input information
    cout << "String: " << textToSearch << endl;
    cout << "Character: " << characterToFind << endl;
    
    // Count occurrences
    countCharacterOccurrences(characterToFind, textToSearch, numberOfOccurrences);
    
    // Display result
    cout << "Occurrences: " << numberOfOccurrences << endl;
    
    return 0;
}