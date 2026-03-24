#include <iostream>
#include <cstring> // For strlen, strcpy

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
    MyString(const MyString& other) : data(nullptr), length(0) {
        std::cout << "  [MyString] Copy constructor invoked for \"" << other.c_str() << "\"" << std::endl;
        length = other.length;
        data = new char[length + 1];
        strcpy(data, other.data);
    }

    // Assignment operator - ROBUSTNESS ISSUE: No self-assignment check
    MyString& operator=(const MyString& other) {
        std::cout << "  [MyString] Assignment operator invoked from \"" << other.c_str() << "\" to \"" << c_str() << "\"" << std::endl;
        // PROBLEM: If this == &other, delete[] data; will free 'other.data'
        // Then strcpy will try to read from freed memory, leading to crash/UB.
        // Also, if new char[] fails, 'data' is null and original content is lost (memory leak/resource leak).
        delete[] data; // Frees current object's memory

        length = other.length;
        data = new char[length + 1]; // Potentially throws std::bad_alloc
        strcpy(data, other.data); // 'other.data' might be invalid if self-assignment occurred

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

    MyString s1("Hello");
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
    MyString s3("World");
    s3.print("s3 initialized");
    s1 = s3; // Assignment operator
    s1.print("s1 assigned from s3");
    s3.print("s3 (after assignment)");

    std::cout << "\n--- Invoking Assignment Operator (Self-assignment - ROBUSTNESS ISSUE) ---" << std::endl;
    MyString s4("SelfTest");
    s4.print("s4 initialized");
    std::cout << "  Attempting self-assignment: s4 = s4;" << std::endl;
    s4 = s4; // This will likely crash due to the robustness issue
    s4.print("s4 (after self-assignment)"); // This line might not be reached

    std::cout << "\n--- End of demonstration ---" << std::endl;
    return 0;
}