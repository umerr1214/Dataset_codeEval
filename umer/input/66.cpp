#include <iostream>
#include <cstring>
using namespace std;

/**
 * String tokenizer function that extracts the first token from a string
 * @param str Input string array (modified to contain remaining part after token)
 * @param size Reference to string size (updated after tokenization)
 * @param token Delimiter character to tokenize on
 * @return Pointer to dynamically allocated string containing the first token
 */
char* myTokenizer(char str[], int& size, char token) {
    // Input validation
    if (!str || size <= 0) {
        return nullptr;
    }
    
    // Find the first occurrence of the token
    char* tokenPos = nullptr;
    for (int i = 0; i < size; i++) {
        if (str[i] == token) {
            tokenPos = &str[i];
            break;
        }
    }
    
    // If token not found, return copy of entire string
    if (tokenPos == nullptr) {
        char* result = new(nothrow) char[size + 1];
        if (!result) {
            cout << "Error: Memory allocation failed.\n";
            return nullptr;
        }
        strcpy(result, str);
        str[0] = '\0';  // Clear original string
        size = 0;
        return result;
    }
    
    // Calculate length of part before token
    int beforeTokenLength = tokenPos - str;
    
    // Allocate memory for the token part with error checking
    char* beforeToken = new(nothrow) char[beforeTokenLength + 1];
    if (!beforeToken) {
        cout << "Error: Memory allocation failed for token.\n";
        return nullptr;
    }
    
    // Copy characters before token efficiently
    if (beforeTokenLength > 0) {
        memcpy(beforeToken, str, beforeTokenLength);
    }
    beforeToken[beforeTokenLength] = '\0';
    
    // Calculate length of part after token
    int afterTokenLength = size - beforeTokenLength - 1;
    
    // Modify original string to contain part after token
    if (afterTokenLength > 0) {
        memmove(str, str + beforeTokenLength + 1, afterTokenLength);
    }
    str[afterTokenLength] = '\0';
    
    // Update size
    size = afterTokenLength;
    
    return beforeToken;
}

int main() {
    // Initialize test string
    char str[] = "This-a-sample-string";
    cout << "Original string: " << str << endl;
    
    // Set up tokenization parameters
    char token = '-';
    int size = strlen(str);
    
    // First tokenization
    char* tokenizeStr = myTokenizer(str, size, token);
    if (tokenizeStr) {
        cout << "First token: " << tokenizeStr << endl;
        cout << "Remaining string: " << str << endl;
        cout << "------------------" << endl;
        
        // Second tokenization
        char* tokenizeStr2 = myTokenizer(str, size, token);
        if (tokenizeStr2) {
            cout << "Second token: " << tokenizeStr2 << endl;
            cout << "Remaining string: " << str << endl;
            
            // Clean up allocated memory
            delete[] tokenizeStr2;
        } else {
            cout << "Error: Second tokenization failed.\n";
        }
        
        // Clean up allocated memory
        delete[] tokenizeStr;
    } else {
        cout << "Error: First tokenization failed.\n";
    }
    
    cout << "Tokenization completed successfully.\n";
    return 0;
}