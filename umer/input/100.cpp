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
    // Constructor - lacks validation (robustness issue)
    Quotation(int cap = 10) {
        capacity = cap;  // No validation for negative capacity
        numOfQuotations = 0;
        quote = new char*[capacity];  // Could fail with negative capacity
        author = new char*[capacity];
        for (int i = 0; i < capacity; i++) {
            quote[i] = nullptr;
            author[i] = nullptr;
        }
    }
    
    // Copy constructor - lacks validation (robustness issue)
    Quotation(const Quotation& other) {
        capacity = other.capacity;
        numOfQuotations = other.numOfQuotations;
        quote = new char*[capacity];  // No validation
        author = new char*[capacity];
        
        for (int i = 0; i < capacity; i++) {
            if (i < numOfQuotations) {
                quote[i] = new char[strlen(other.quote[i]) + 1];  // No null check
                strcpy(quote[i], other.quote[i]);
                author[i] = new char[strlen(other.author[i]) + 1];  // No null check
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
    
    // Add quotation - lacks validation (robustness issue)
    void addQuotation(char* q, char* a) {
        // No validation for null pointers
        if (numOfQuotations >= capacity) {
            // Resize arrays
            int newCapacity = capacity * 2;
            char** newQuote = new char*[newCapacity];
            char** newAuthor = new char*[newCapacity];
            
            for (int i = 0; i < capacity; i++) {
                newQuote[i] = quote[i];
                newAuthor[i] = author[i];
            }
            
            for (int i = capacity; i < newCapacity; i++) {
                newQuote[i] = nullptr;
                newAuthor[i] = nullptr;
            }
            
            delete[] quote;
            delete[] author;
            quote = newQuote;
            author = newAuthor;
            capacity = newCapacity;
        }
        
        quote[numOfQuotations] = new char[strlen(q) + 1];  // No null check for q
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
    
    // Display author wise - lacks validation (robustness issue)
    void displayAuthorWise(char* authorName) {
        // No null check for authorName
        cout << "Quotations by " << authorName << ":" << endl;
        bool found = false;
        for (int i = 0; i < numOfQuotations; i++) {
            if (strcmp(author[i], authorName) == 0) {  // No null checks
                cout << (i + 1) << ". \"" << quote[i] << "\" - " << author[i] << endl;
                found = true;
            }
        }
        if (!found) {
            cout << "No quotations found by this author." << endl;
        }
    }
    
    // Display quotation containing keyword - lacks validation (robustness issue)
    void displayQuotation(char* keyword) {
        // No null check for keyword
        cout << "Quotations containing \"" << keyword << "\":" << endl;
        bool found = false;
        for (int i = 0; i < numOfQuotations; i++) {
            if (strstr(quote[i], keyword) != nullptr) {  // No null checks
                cout << (i + 1) << ". \"" << quote[i] << "\" - " << author[i] << endl;
                found = true;
            }
        }
        if (!found) {
            cout << "No quotations found containing this keyword." << endl;
        }
    }
    
    // Remove quotation - lacks validation (robustness issue)
    void removeQuotation(char* keyword) {
        // No null check for keyword
        cout << "Quotations containing \"" << keyword << "\":" << endl;
        int* indices = new int[numOfQuotations];
        int count = 0;
        
        for (int i = 0; i < numOfQuotations; i++) {
            if (strstr(quote[i], keyword) != nullptr) {  // No null checks
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
        cin >> choice;  // No input validation
        
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