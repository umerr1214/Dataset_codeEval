#include <iostream>
#include <cstring>
using namespace std;

// Function to tokenize string based on delimiter
char* myTokenizer(char str[], int& size, char token) {
    // ❌ ROBUSTNESS ISSUE: No null pointer check for str
    // ❌ ROBUSTNESS ISSUE: No validation for size parameter
    
    // Find the first occurrence of the token
    char* tokenPos = nullptr;
    for (int i = 0; i < size; i++) {
        if (str[i] == token) {  // ❌ ROBUSTNESS ISSUE: No bounds checking
            tokenPos = &str[i];
            break;
        }
    }
    
    // If token not found, return the entire string
    if (tokenPos == nullptr) {
        return str;  // ❌ ROBUSTNESS ISSUE: Returning original string without copying
    }
    
    // Create a copy of the part before token
    int beforeTokenLength = tokenPos - str;
    // ❌ ROBUSTNESS ISSUE: No check for memory allocation failure
    char* beforeToken = new char[beforeTokenLength + 1];
    
    // Copy characters before token
    for (int i = 0; i < beforeTokenLength; i++) {
        beforeToken[i] = str[i];  // ❌ ROBUSTNESS ISSUE: No bounds checking
    }
    beforeToken[beforeTokenLength] = '\0';
    
    // Modify original string to contain part after token
    int afterTokenLength = size - beforeTokenLength - 1;
    // ❌ ROBUSTNESS ISSUE: No check if afterTokenLength is negative
    
    for (int i = 0; i < afterTokenLength; i++) {
        str[i] = str[beforeTokenLength + 1 + i];  // ❌ ROBUSTNESS ISSUE: No bounds checking
    }
    str[afterTokenLength] = '\0';  // ❌ ROBUSTNESS ISSUE: Could write beyond array bounds
    
    // Update size
    size = afterTokenLength;
    
    return beforeToken;
}

int main() {
    char str[] = "This-a-sample-string";
    cout << str << endl;
    
    char token = '-';
    int size = strlen(str);
    
    // ❌ ROBUSTNESS ISSUE: No check if myTokenizer returns valid pointer
    char* tokenizeStr = myTokenizer(str, size, token);
    cout << tokenizeStr << endl;  // Could crash if tokenizeStr is null
    cout << str << endl;
    cout << "------------------" << endl;
    
    // ❌ ROBUSTNESS ISSUE: No check if myTokenizer returns valid pointer
    char* tokenizeStr2 = myTokenizer(str, size, token);
    cout << tokenizeStr2 << endl;  // Could crash if tokenizeStr2 is null
    cout << str << endl;
    
    // ❌ ROBUSTNESS ISSUE: No null checks before deletion
    delete[] tokenizeStr;   // Could crash if tokenizeStr is null
    delete[] tokenizeStr2;  // Could crash if tokenizeStr2 is null
    
    return 0;
}