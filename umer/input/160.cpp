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
    Animal *ptrAnimal = &objAnimal;
    Dog *ptrDog = &objDog;
    
    cout << objAnimal.speak() << endl;
    cout << objDog.speak() << endl;
    cout << ptrAnimal->speak() << endl;
    cout << ptrDog->speak() << endl;
    cout << ptrDog->Animal::speak() << endl;
    
    // Robustness issue: Attempting to modify string literal (undefined behavior)
    char* result = objAnimal.speak();
    result[0] = 'S';  // This could cause runtime error or undefined behavior
    cout << result << endl;
    
    return 0;
}