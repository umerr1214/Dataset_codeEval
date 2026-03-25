#include <iostream>
#include <cstring>
using namespace std;

// Function to tokenize string based on delimiter
char* myTokenizer(char str[], int& size, char token) {
    // ❌ LOGICAL ERROR: Wrong loop condition - should be < size, not <= size
    char* tokenPos = nullptr;
    for (int i = 0; i <= size; i++) {  // This can access beyond array bounds
        if (str[i] == token) {
            tokenPos = &str[i];
            break;
        }
    }
    
    // If token not found, return the entire string
    if (tokenPos == nullptr) {
        return str;
    }
    
    // Create a copy of the part before token
    int beforeTokenLength = tokenPos - str;
    char* beforeToken = new char[beforeTokenLength + 1];
    
    // ❌ LOGICAL ERROR: Wrong loop condition - should be < beforeTokenLength
    for (int i = 0; i <= beforeTokenLength; i++) {  // This copies one extra character
        beforeToken[i] = str[i];
    }
    beforeToken[beforeTokenLength] = '\0';
    
    // ❌ LOGICAL ERROR: Wrong calculation for after token length
    int afterTokenLength = size - beforeTokenLength;  // Should subtract 1 for the token itself
    
    // ❌ LOGICAL ERROR: Wrong starting index for copying
    for (int i = 0; i < afterTokenLength; i++) {
        str[i] = str[beforeTokenLength + i];  // Should be beforeTokenLength + 1 + i
    }
    str[afterTokenLength] = '\0';
    
    // Update size
    size = afterTokenLength;
    
    return beforeToken;
}

int main() {
    char str[] = "This-a-sample-string";
    cout << str << endl;
    
    char token = '-';
    int size = strlen(str);
    
    char* tokenizeStr = myTokenizer(str, size, token);
    cout << tokenizeStr << endl;
    cout << str << endl;
    cout << "------------------" << endl;
    
    char* tokenizeStr2 = myTokenizer(str, size, token);
    cout << tokenizeStr2 << endl;
    cout << str << endl;
    
    // Clean up memory
    delete[] tokenizeStr;
    delete[] tokenizeStr2;
    
    return 0;
}