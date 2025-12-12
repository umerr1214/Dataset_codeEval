#include <iostream>
using namespace std;

class Animal {
public:
    char* speak() {
        return "speak() called.";
    }
};

class Dog : public Animal {
public:
    char* speak() {
        return "woof!";
    }
};

int main() {
    Animal objAnimal;
    Dog objDog;
    Animal *ptrAnimal = &objDog;  // Base pointer pointing to derived object
    Dog *ptrDog = &objAnimal;     // This will cause compilation error
    
    cout << objAnimal.speak() << endl;
    cout << objDog.speak() << endl;
    cout << ptrAnimal->speak() << endl;
    cout << ptrDog->speak() << endl  // Missing semicolon - syntax error
    
    return 0;
}