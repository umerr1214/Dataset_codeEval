#include <iostream>
using namespace std;

class Animal {
public:
    char* speak() {
        return "speak() called.";
    }
};

// Semantic error: Using protected inheritance instead of public
class Dog : protected Animal {
public:
    char* speak() {
        return "woof!";
    }
};

// Semantic error: main function declared as void instead of int
void main() {
    Animal objAnimal;
    Dog objDog;
    Animal *ptrAnimal = &objDog;  // This will cause error due to protected inheritance
    
    cout << objAnimal.speak() << endl;
    cout << objDog.speak() << endl;
    cout << ptrAnimal->speak() << endl;
    
    // Semantic error: missing return statement for main function
}