#include <iostream>
using namespace std;

class Animal {
public:
    virtual char* speak() {
        return "speak() called.";
    }
    
    virtual ~Animal() = default;
};

class Dog : public Animal {
public:
    char* speak() override {
        return "woof!";
    }
};

int main() {
    Dog lassie;
    Animal *myPet = &lassie;
    cout << myPet->speak() << endl;
    
    return 0;
}