#include <iostream>
#include <cstring> // For strlen

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
            for (size_t i = 0; i <= length; ++i) { // Less efficient than strcpy
                data[i] = str[i];
            }
        }
    }

    // Destructor
    ~MyString() {
        std::cout << "  [MyString] Destructor invoked for \"" << c_str() << "\"" << std::endl;
        delete[] data;
    }

    // Copy constructor
    MyString(const MyString& other) : data(nullptr), length(0) {
        std::cout << "  [MyString] Copy constructor invoked for \"" << other.c_str() << "\"" << std::endl;
        length = other.length;
        data = new char[length + 1];
        for (size_t i = 0; i <= length; ++i) { // Consistent inefficient copy
            data[i] = other.data[i];
        }
    }

    // Assignment operator - READABILITY / EFFICIENCY ISSUE
    MyString& operator=(const MyString& other) {
        std::cout << "  [MyString] Assignment operator invoked from \"" << other.c_str() << "\" to \"" << c_str() << "\"" << std::endl;
        if (this == &other) {
            return *this; // Correct self-assignment check
        }

        // EFFICIENCY ISSUE: Always reallocates, even if current buffer is large enough
        // or if 'other' is smaller. Does not reuse existing memory.
        // READABILITY ISSUE: Uses a manual loop instead of strcpy/memcpy.
        delete[] data; // Free existing memory
        data = nullptr; // Defensive programming (good for readability)
        length = 0; // Reset length (good for readability)

        if (other.data) { // Check if other has data (good for robustness)
            length = other.length;
            data = new char[length + 1];
            for (size_t i = 0; i <= length; ++i) { // Manual char-by-char copy
                data[i] = other.data[i];
            }
        }
        return *this;
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

// Example usage function to demonstrate copy constructor
void func_by_value(MyString s) {
    std::cout << "  Inside func_by_value: ";
    s.print("Parameter s");
}

int main() {
    std::cout << "--- Demonstrating MyString Class ---" << std::endl;

    MyString s1("Hello, World!");
    s1.print("s1 initialized");

    std::cout << "\n--- Invoking Copy Constructor (initialization) ---" << std::endl;
    MyString s2 = s1; // Copy constructor
    s2.print("s2 initialized from s1");

    std::cout << "\n--- Invoking Copy Constructor (pass by value) ---" << std::endl;
    std::cout << "  Calling func_by_value with s1..." << std::endl;
    func_by_value(s1); // Copy constructor
    std::cout << "  Back in main after func_by_value." << std::endl;
    s1.print("s1 (after func_by_value)");

    std::cout << "\n--- Invoking Assignment Operator ---" << std::endl;
    MyString s3("Short");
    s3.print("s3 initialized");
    s1 = s3; // Assignment operator (s1 was "Hello, World!", now "Short")
    s1.print("s1 assigned from s3");
    s3.print("s3 (after assignment)");

    std::cout << "\n--- Invoking Assignment Operator (longer string) ---" << std::endl;
    MyString s4("A much longer string to test reallocation");
    s4.print("s4 initialized");
    s1 = s4; // Assignment operator (s1 was "Short", now "A much longer string...")
    s1.print("s1 assigned from s4");
    s4.print("s4 (after assignment)");

    std::cout << "\n--- Invoking Assignment Operator (Self-assignment) ---" << std::endl;
    MyString s5("SelfTest");
    s5.print("s5 initialized");
    std::cout << "  Attempting self-assignment: s5 = s5;" << std::endl;
    s5 = s5; // Should work correctly, but still goes through the inefficient path
    s5.print("s5 (after self-assignment)");

    std::cout << "\n--- End of demonstration ---" << std::endl;
    return 0;
}