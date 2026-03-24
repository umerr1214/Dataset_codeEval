#include <iostream>
#include <cstring> // For strlen, strcpy
#include <algorithm> // For std::swap

class MyString {
private:
    char* data;
    size_t length;

public:
    // Default constructor
    MyString(const char* str = nullptr) : data(nullptr), length(0) {
        if (str) {
            length = strlen(str);
            data = new char[length + 1];
            strcpy(data, str);
        }
    }

    // Destructor
    ~MyString() {
        std::cout << "  [MyString] Destructor invoked for \"" << c_str() << "\"" << std::endl;
        delete[] data;
    }

    // Copy constructor
    // Invoked during:
    // 1. Initialization: MyString s2 = s1; MyString s3(s1);
    // 2. Pass by value: func_by_value(s1);
    // 3. Return by value (often optimized away by RVO/NRVO)
    MyString(const MyString& other) : data(nullptr), length(0) {
        std::cout << "  [MyString] Copy constructor invoked for \"" << other.c_str() << "\"" << std::endl;
        length = other.length;
        data = new char[length + 1];
        strcpy(data, other.data);
    }

    // Assignment operator
    // Invoked during:
    // 1. Assignment: s1 = s2; (after s1 and s2 have already been constructed)
    // Uses copy-and-swap idiom for strong exception safety and correct self-assignment.
    MyString& operator=(MyString other) { // Note: 'other' is passed by value, invoking copy constructor
        std::cout << "  [MyString] Assignment operator invoked (copy-and-swap) from \"" << other.c_str() << "\" to \"" << c_str() << "\"" << std::endl;
        std::swap(data, other.data);     // Swap the data pointers
        std::swap(length, other.length); // Swap the lengths
        return *this; // 'other' (original 'this' data) is destructed when it goes out of scope
    }

    // Getter for C-style string
    const char* c_str() const {
        return data ? data : "";
    }

    size_t size() const {
        return length;
    }

    void print(const char* label) const {
        std::cout << label << ": \"" << c_str() << "\" (length " << size() << ")" << std::endl;
    }
};

// Example function to demonstrate copy constructor (pass by value)
void func_by_value(MyString s) {
    std::cout << "  Inside func_by_value: ";
    s.print("Parameter s");
    // 's' will be destructed here, showing its value
    std::cout << "  Leaving func_by_value." << std::endl;
}

int main() {
    std::cout << "--- Demonstrating MyString Class ---" << std::endl;

    MyString s1("Initial String");
    s1.print("s1 initialized");

    std::cout << "\n--- Explaining Copy Constructor Invocation ---" << std::endl;
    std::cout << "  1. Initialization of a new object from an existing one:" << std::endl;
    MyString s2 = s1; // Copy constructor invoked
    s2.print("s2 initialized from s1");

    MyString s3("Another String");
    s3.print("s3 initialized");
    MyString s4(s3); // Copy constructor invoked
    s4.print("s4 initialized from s3");

    std::cout << "\n  2. Passing an object by value to a function:" << std::endl;
    std::cout << "  Calling func_by_value with s1..." << std::endl;
    func_by_value(s1); // Copy constructor invoked for parameter 's'
    std::cout << "  Back in main after func_by_value." << std::endl;
    s1.print("s1 (after func_by_value)"); // s1 remains unchanged

    std::cout << "\n--- Explaining Assignment Operator Invocation ---" << std::endl;
    std::cout << "  Assignment occurs when an already constructed object is assigned a new value." << std::endl;

    MyString s5("Original Content");
    s5.print("s5 initialized");
    MyString s6("New Content");
    s6.print("s6 initialized");

    std::cout << "  Invoking assignment operator: s5 = s6;" << std::endl;
    s5 = s6; // Assignment operator invoked
    s5.print("s5 assigned from s6");
    s6.print("s6 (after assignment)"); // s6 remains unchanged

    std::cout << "\n--- Demonstrating Self-Assignment (Correctly Handled) ---" << std::endl;
    MyString s7("Self-Assignment Test");
    s7.print("s7 initialized");
    std::cout << "  Invoking self-assignment: s7 = s7;" << std::endl;
    s7 = s7; // Self-assignment, correctly handled by copy-and-swap
    s7.print("s7 (after self-assignment)");

    std::cout << "\n--- End of demonstration ---" << std::endl;
    // Objects s1, s2, s3, s4, s5, s6, s7 will be destructed here.
    return 0;
}