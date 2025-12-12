#include <iostream>
#include <cstring>
using namespace std;

// Function to tokenize string based on delimiter
char* myTokenizer(char str[], int& size, char token) {
    // Find the first occurrence of the token
    char* tokenPos = nullptr;
    for (int i = 0; i < size; i++) {
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
    
    // Copy characters before token
    for (int i = 0; i < beforeTokenLength; i++) {
        beforeToken[i] = str[i];
    }
    beforeToken[beforeTokenLength] = '\0';
    
    // Modify original string to contain part after token
    int afterTokenLength = size - beforeTokenLength - 1;
    for (int i = 0; i < afterTokenLength; i++) {
        str[i] = str[beforeTokenLength + 1 + i];
    }
    str[afterTokenLength] = '\0';
    
    // Update size
    size = afterTokenLength;
    
    return beforeToken  // ❌ SYNTAX ERROR: Missing semicolon
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