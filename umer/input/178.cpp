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

class Cat : public Animal {
public:
    char* speak() override {
        return "meow!";
    }
};

int main() {
    const int size = 2;
    Animal * myPets[size];
    Cat whiskers;
    Dog mutley;

    myPets[0] = &whiskers;
    myPets[1] = &mutley;

    for(int i=0; i<size; i++)
        cout << myPets[i]->speak() << endl;
    
    return 0;
}