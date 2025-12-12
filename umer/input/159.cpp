#include <iostream>
using namespace std;

class Animal {
public:
    char* speak() {
        return "speak() called.";
    }
};

// Semantic error: Using private inheritance instead of public
class Dog : private Animal {
public:
    char* speak() {
        return "woof!";
    }
};

// Semantic error: main function declared as void instead of int
void main() {
    Animal objAnimal;
    Dog objDog;
    Animal *ptrAnimal = &objAnimal;
    Dog *ptrDog = &objDog;
    
    cout << objAnimal.speak() << endl;
    cout << objDog.speak() << endl;
    cout << ptrAnimal->speak() << endl;
    cout << ptrDog->speak() << endl;
    cout << ptrDog->Animal::speak() << endl;
    
    // Semantic error: missing return statement for main function
}