#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

class Quotation {
private:
    char** quote;
    int numOfQuotations;
    char** author;
    int capacity;
    
    // Helper function to validate input
    bool isValidString(const char* str) const {
        return str != nullptr && strlen(str) > 0;
    }
    
    // Helper function for case-insensitive string comparison
    bool containsIgnoreCase(const char* text, const char* keyword) const {
        if (!text || !keyword) return false;
        
        int textLen = strlen(text);
        int keywordLen = strlen(keyword);
        
        for (int i = 0; i <= textLen - keywordLen; i++) {
            bool match = true;
            for (int j = 0; j < keywordLen; j++) {
                if (tolower(text[i + j]) != tolower(keyword[j])) {
                    match = false;
                    break;
                }
            }
            if (match) return true;
        }
        return false;
    }
    
    // Helper function to resize arrays
    void resize() {
        int newCapacity = capacity * 2;
        char** newQuote = new char*[newCapacity];
        char** newAuthor = new char*[newCapacity];
        
        // Copy existing data
        for (int i = 0; i < capacity; i++) {
            newQuote[i] = quote[i];
            newAuthor[i] = author[i];
        }
        
        // Initialize new slots
        for (int i = capacity; i < newCapacity; i++) {
            newQuote[i] = nullptr;
            newAuthor[i] = nullptr;
        }
        
        // Clean up old arrays
        delete[] quote;
        delete[] author;
        
        // Update pointers and capacity
        quote = newQuote;
        author = newAuthor;
        capacity = newCapacity;
    }

public:
    // Constructor with validation
    Quotation(int cap = 10) {
        if (cap <= 0) {
            cout << "Warning: Invalid capacity. Setting to default value 10." << endl;
            cap = 10;
        }
        
        capacity = cap;
        numOfQuotations = 0;
        quote = new char*[capacity];
        author = new char*[capacity];
        
        for (int i = 0; i < capacity; i++) {
            quote[i] = nullptr;
            author[i] = nullptr;
        }
    }
    
    // Copy constructor with proper validation
    Quotation(const Quotation& other) {
        capacity = other.capacity;
        numOfQuotations = other.numOfQuotations;
        quote = new char*[capacity];
        author = new char*[capacity];
        
        for (int i = 0; i < capacity; i++) {
            if (i < numOfQuotations && other.quote[i] && other.author[i]) {
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
    
    // Assignment operator
    Quotation& operator=(const Quotation& other) {
        if (this != &other) {
            // Clean up existing data
            for (int i = 0; i < numOfQuotations; i++) {
                delete[] quote[i];
                delete[] author[i];
            }
            delete[] quote;
            delete[] author;
            
            // Copy from other
            capacity = other.capacity;
            numOfQuotations = other.numOfQuotations;
            quote = new char*[capacity];
            author = new char*[capacity];
            
            for (int i = 0; i < capacity; i++) {
                if (i < numOfQuotations && other.quote[i] && other.author[i]) {
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
        return *this;
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
    
    // Add quotation with validation
    void addQuotation(char* q, char* a) {
        if (!isValidString(q)) {
            cout << "Error: Invalid quotation text." << endl;
            return;
        }
        
        if (numOfQuotations >= capacity) {
            resize();
        }
        
        // Add quote
        quote[numOfQuotations] = new char[strlen(q) + 1];
        strcpy(quote[numOfQuotations], q);
        
        // Add author (use "Anonymous" if not provided)
        if (!isValidString(a)) {
            author[numOfQuotations] = new char[10];
            strcpy(author[numOfQuotations], "Anonymous");
        } else {
            author[numOfQuotations] = new char[strlen(a) + 1];
            strcpy(author[numOfQuotations], a);
        }
        
        numOfQuotations++;
        cout << "Quotation added successfully." << endl;
    }
    
    // Display author wise with validation
    void displayAuthorWise(char* authorName) const {
        if (!isValidString(authorName)) {
            cout << "Error: Invalid author name." << endl;
            return;
        }
        
        cout << "Quotations by " << authorName << ":" << endl;
        bool found = false;
        
        for (int i = 0; i < numOfQuotations; i++) {
            if (author[i] && strcmp(author[i], authorName) == 0) {
                cout << (i + 1) << ". \"" << quote[i] << "\" - " << author[i] << endl;
                found = true;
            }
        }
        
        if (!found) {
            cout << "No quotations found by this author." << endl;
        }
    }
    
    // Display quotation containing keyword with validation
    void displayQuotation(char* keyword) const {
        if (!isValidString(keyword)) {
            cout << "Error: Invalid keyword." << endl;
            return;
        }
        
        cout << "Quotations containing \"" << keyword << "\":" << endl;
        bool found = false;
        
        for (int i = 0; i < numOfQuotations; i++) {
            if (quote[i] && containsIgnoreCase(quote[i], keyword)) {
                cout << (i + 1) << ". \"" << quote[i] << "\" - " << author[i] << endl;
                found = true;
            }
        }
        
        if (!found) {
            cout << "No quotations found containing this keyword." << endl;
        }
    }
    
    // Remove quotation with validation
    void removeQuotation(char* keyword) {
        if (!isValidString(keyword)) {
            cout << "Error: Invalid keyword." << endl;
            return;
        }
        
        cout << "Quotations containing \"" << keyword << "\":" << endl;
        int* indices = new int[numOfQuotations];
        int count = 0;
        
        for (int i = 0; i < numOfQuotations; i++) {
            if (quote[i] && containsIgnoreCase(quote[i], keyword)) {
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
        
        if (!(cin >> choice) || choice < 1 || choice > count) {
            cout << "Invalid choice." << endl;
            cin.clear();
            cin.ignore(10000, '\n');
            delete[] indices;
            return;
        }
        
        int indexToDelete = indices[choice - 1];
        
        // Free memory for deleted quotation
        delete[] quote[indexToDelete];
        delete[] author[indexToDelete];
        
        // Shift remaining elements
        for (int i = indexToDelete; i < numOfQuotations - 1; i++) {
            quote[i] = quote[i + 1];
            author[i] = author[i + 1];
        }
        
        numOfQuotations--;
        cout << "Quotation deleted successfully." << endl;
        
        delete[] indices;
    }
    
    // Display all quotations
    void displayAll() const {
        if (numOfQuotations == 0) {
            cout << "No quotations available." << endl;
            return;
        }
        
        cout << "All Quotations (" << numOfQuotations << " total):" << endl;
        for (int i = 0; i < numOfQuotations; i++) {
            cout << (i + 1) << ". \"" << quote[i] << "\" - " << author[i] << endl;
        }
    }
    
    // Get number of quotations
    int getCount() const {
        return numOfQuotations;
    }
    
    // Get capacity
    int getCapacity() const {
        return capacity;
    }
};

int main() {
    cout << "=== Quotation Management System ===" << endl;
    
    Quotation quotes(5);
    
    // Add some quotations
    cout << "\nAdding quotations..." << endl;
    quotes.addQuotation("The only way to do great work is to love what you do.", "Steve Jobs");
    quotes.addQuotation("Life is what happens to you while you're busy making other plans.", "John Lennon");
    quotes.addQuotation("The future belongs to those who believe in the beauty of their dreams.", "Eleanor Roosevelt");
    quotes.addQuotation("It is during our darkest moments that we must focus to see the light.", "Aristotle");
    quotes.addQuotation("The way to get started is to quit talking and begin doing.", "Walt Disney");
    quotes.addQuotation("Innovation distinguishes between a leader and a follower.", nullptr); // Test anonymous
    
    // Display all quotations
    cout << "\n=== All Quotations ===" << endl;
    quotes.displayAll();
    cout << "Total: " << quotes.getCount() << "/" << quotes.getCapacity() << endl;
    
    // Search by author
    cout << "\n=== Search by Author ===" << endl;
    quotes.displayAuthorWise("Steve Jobs");
    
    // Search by keyword
    cout << "\n=== Search by Keyword ===" << endl;
    quotes.displayQuotation("life");
    
    // Test copy constructor
    cout << "\n=== Testing Copy Constructor ===" << endl;
    Quotation copyQuotes = quotes;
    cout << "Copy has " << copyQuotes.getCount() << " quotations." << endl;
    
    // Remove quotation
    cout << "\n=== Remove Quotation ===" << endl;
    quotes.removeQuotation("way");
    
    // Display all after removal
    cout << "\n=== After Removal ===" << endl;
    quotes.displayAll();
    
    // Test error handling
    cout << "\n=== Testing Error Handling ===" << endl;
    quotes.addQuotation(nullptr, "Test Author");  // Invalid quote
    quotes.displayAuthorWise(nullptr);  // Invalid author
    quotes.displayQuotation("");  // Empty keyword
    
    return 0;
}