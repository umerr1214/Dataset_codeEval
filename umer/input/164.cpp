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
    // Logical error: Trying to assign base object to derived pointer using cast
    Dog *ptrDog = (Dog*)&objAnimal;  // Dangerous cast - logically incorrect
    
    cout << objAnimal.speak() << endl;
    cout << objDog.speak() << endl;
    cout << ptrAnimal->speak() << endl;
    cout << ptrDog->speak() << endl;  // This may cause undefined behavior
    
    return 0;
}