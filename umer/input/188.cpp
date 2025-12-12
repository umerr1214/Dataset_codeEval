#include <iostream>
#include <conio.h>
using namespace std;

class Animal {
public:
    virtual char* speak() {
        return "speak() called.";
    }
    
    ~Animal() { cout << "~Animal() called." << endl; }
};

class Dog : public Animal {
public:
    char* speak() override {
        return "woof!";
    }
    
    ~Dog() { cout << "~Dog() called." << endl; }
};

class Cat : public Animal {
public:
    char* speak() override {
        return "meow!";
    }
    
    ~Cat() { cout << "~Cat() called." << endl; }
};

int main() {
    const int size = 5;
    Animal * myPets[size];
    
    int i = 0;
    while (i < size) {
        cout << "Press 1 for a Dog and 2 for a Cat." << endl;
        switch (getch()) {
            case '1':
                myPets[i] = new Dog;
                cout << "Dog added at position " << i << endl << endl;
                i++;
                break;
            case '2':
                myPets[i] = new Cat;
                cout << "Cat added at position " << i << endl << endl;
                i++;
                break;
            default:
                cout << "Invalid input. Enter again." << endl << endl;
                break;
        }
    }
    
    for (int j = 0; j < size; j++)
        cout << myPets[j]->speak() << endl;
    
    for (int k = 0; k < size; k++)
        delete myPets[k];
    
    return 0;
}