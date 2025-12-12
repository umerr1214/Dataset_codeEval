#include <iostream>
#include <cstring>
using namespace std;

class Quotation {
private:
    char** quote;
    int numOfQuotations;
    char** author;
    int capacity;

public:
    // Constructor
    Quotation(int cap = 10) {
        capacity = cap;
        numOfQuotations = 0;
        quote = new char*[capacity];
        author = new char*[capacity];
        for (int i = 0; i < capacity; i++) {
            quote[i] = nullptr;
            author[i] = nullptr;
        }
    }
    
    // Copy constructor
    Quotation(const Quotation& other) {
        capacity = other.capacity;
        numOfQuotations = other.numOfQuotations;
        quote = new char*[capacity];
        author = new char*[capacity];
        
        for (int i = 0; i < capacity; i++) {
            if (i < numOfQuotations) {
                quote[i] = new char[strlen(other.quote[i]) + 1];
                strcpy(quote[i], other.quote[i]);
                author[i] = new char[strlen(other.author[i]) + 1];
                strcpy(author[i], other.author[i]);
            } else {
                quote[i] = nullptr;
                author[i] = nullptr;
            }
        }
    }
    
    // Destructor
    ~Quotation() {
        for (int i = 0; i < numOfQuotations; i++) {
            delete[] quote[i];
            delete[] author[i];
        }
        delete[] quote;
        delete[] author;
    }
    
    // Add quotation - inefficient implementation (readability/efficiency issue)
    void addQuotation(char* q, char* a) {
        if (numOfQuotations >= capacity) {
            // Inefficient: creating temporary arrays instead of direct reallocation
            char** tempQuote = new char*[capacity];
            char** tempAuthor = new char*[capacity];
            
            for (int i = 0; i < capacity; i++) {
                tempQuote[i] = quote[i];
                tempAuthor[i] = author[i];
            }
            
            delete[] quote;
            delete[] author;
            
            int newCapacity = capacity * 2;
            quote = new char*[newCapacity];
            author = new char*[newCapacity];
            
            for (int i = 0; i < capacity; i++) {
                quote[i] = tempQuote[i];
                author[i] = tempAuthor[i];
            }
            
            for (int i = capacity; i < newCapacity; i++) {
                quote[i] = nullptr;
                author[i] = nullptr;
            }
            
            delete[] tempQuote;
            delete[] tempAuthor;
            capacity = newCapacity;
        }
        
        quote[numOfQuotations] = new char[strlen(q) + 1];
        strcpy(quote[numOfQuotations], q);
        
        if (a == nullptr || strlen(a) == 0) {
            author[numOfQuotations] = new char[10];
            strcpy(author[numOfQuotations], "Anonymous");
        } else {
            author[numOfQuotations] = new char[strlen(a) + 1];
            strcpy(author[numOfQuotations], a);
        }
        
        numOfQuotations++;
    }
    
    // Display author wise - poor readability (readability/efficiency issue)
    void displayAuthorWise(char* authorName) {
        cout << "Quotations by " << authorName << ":" << endl;
        bool found = false;
        // Poor readability: using while loop instead of for loop
        int i = 0;
        while (i < numOfQuotations) {
            if (strcmp(author[i], authorName) == 0) {
                cout << (i + 1) << ". \"" << quote[i] << "\" - " << author[i] << endl;
                found = true;
            }
            i++;
        }
        if (!found) {
            cout << "No quotations found by this author." << endl;
        }
    }
    
    // Display quotation containing keyword - inefficient (readability/efficiency issue)
    void displayQuotation(char* keyword) {
        cout << "Quotations containing \"" << keyword << "\":" << endl;
        bool found = false;
        // Inefficient: multiple strlen calls
        for (int i = 0; i < numOfQuotations; i++) {
            // Inefficient: manual string search instead of using strstr
            bool contains = false;
            int quoteLen = strlen(quote[i]);
            int keywordLen = strlen(keyword);
            
            for (int j = 0; j <= quoteLen - keywordLen; j++) {
                bool match = true;
                for (int k = 0; k < keywordLen; k++) {
                    if (quote[i][j + k] != keyword[k]) {
                        match = false;
                        break;
                    }
                }
                if (match) {
                    contains = true;
                    break;
                }
            }
            
            if (contains) {
                cout << (i + 1) << ". \"" << quote[i] << "\" - " << author[i] << endl;
                found = true;
            }
        }
        if (!found) {
            cout << "No quotations found containing this keyword." << endl;
        }
    }
    
    // Remove quotation
    void removeQuotation(char* keyword) {
        cout << "Quotations containing \"" << keyword << "\":" << endl;
        int* indices = new int[numOfQuotations];
        int count = 0;
        
        for (int i = 0; i < numOfQuotations; i++) {
            if (strstr(quote[i], keyword) != nullptr) {
                cout << (count + 1) << ". \"" << quote[i] << "\" - " << author[i] << endl;
                indices[count] = i;
                count++;
            }
        }
        
        if (count == 0) {
            cout << "No quotations found containing this keyword." << endl;
            delete[] indices;
            return;
        }
        
        cout << "Enter the number of quotation to delete (1-" << count << "): ";
        int choice;
        cin >> choice;
        
        if (choice >= 1 && choice <= count) {
            int indexToDelete = indices[choice - 1];
            
            delete[] quote[indexToDelete];
            delete[] author[indexToDelete];
            
            for (int i = indexToDelete; i < numOfQuotations - 1; i++) {
                quote[i] = quote[i + 1];
                author[i] = author[i + 1];
            }
            
            numOfQuotations--;
            cout << "Quotation deleted successfully." << endl;
        } else {
            cout << "Invalid choice." << endl;
        }
        
        delete[] indices;
    }
    
    // Display all quotations
    void displayAll() {
        cout << "All Quotations:" << endl;
        for (int i = 0; i < numOfQuotations; i++) {
            cout << (i + 1) << ". \"" << quote[i] << "\" - " << author[i] << endl;
        }
    }
};

int main() {
    Quotation quotes(5);
    
    // Add some quotations
    quotes.addQuotation("The only way to do great work is to love what you do.", "Steve Jobs");
    quotes.addQuotation("Life is what happens to you while you're busy making other plans.", "John Lennon");
    quotes.addQuotation("The future belongs to those who believe in the beauty of their dreams.", "Eleanor Roosevelt");
    quotes.addQuotation("It is during our darkest moments that we must focus to see the light.", "Aristotle");
    quotes.addQuotation("The way to get started is to quit talking and begin doing.", "Walt Disney");
    
    // Display all quotations
    quotes.displayAll();
    
    // Search by author
    cout << "\n--- Search by Author ---" << endl;
    quotes.displayAuthorWise("Steve Jobs");
    
    // Search by keyword
    cout << "\n--- Search by Keyword ---" << endl;
    quotes.displayQuotation("life");
    
    // Remove quotation
    cout << "\n--- Remove Quotation ---" << endl;
    quotes.removeQuotation("way");
    
    // Display all after removal
    cout << "\n--- After Removal ---" << endl;
    quotes.displayAll();
    
    return 0;
}