#include <iostream>
using namespace std;

class Animal {
public:
    // Robustness issue: Returning pointer to string literal without const
    char* speak() {
        return "speak() called.";
    }
};

class Dog : public Animal {
public:
    // Robustness issue: Returning pointer to string literal without const
    char* speak() {
        return "woof!";
    }
};

int main() {
    Animal objAnimal;
    Dog objDog;
    Animal *ptrAnimal = &objDog;  // Base pointer pointing to derived object
    
    cout << objAnimal.speak() << endl;
    cout << objDog.speak() << endl;
    cout << ptrAnimal->speak() << endl;
    
    // Robustness issue: No null pointer checking
    Animal *nullPtr = nullptr;
    cout << nullPtr->speak() << endl;  // This will cause segmentation fault
    
    // Robustness issue: Attempting to modify string literal
    char* result = ptrAnimal->speak();
    result[0] = 'S';  // Undefined behavior
    cout << result << endl;
    
    return 0;
}