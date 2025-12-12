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
    Animal *ptrAnimal = &objAnimal;
    Dog *ptrDog = &objDog;
    
    cout << objAnimal.speak() << endl;
    cout << objDog.speak() << endl;
    cout << ptrAnimal->speak() << endl;
    cout << ptrDog->speak() << endl;
    cout << ptrDog->Animal::speak() << endl  // Missing semicolon - syntax error
    
    return 0;
}