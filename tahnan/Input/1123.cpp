#include <iostream>
using namespace std;

class Animal {
public:
    virtual void speak() {
        cout << "Unknown" << endl;
    }
};

class Dog : public Animal {
public:
    void speak() { cout << "Meow" << endl; } // Logical error: wrong sound
};

class Cat : public Animal {
public:
    void speak() { cout << "Woof" << endl; } // Logical error: wrong sound
};

class Cow : public Animal {
public:
    void speak() { cout << "Moo" << endl; }
};

int main() {
    Animal* animals[3];
    Dog d;
    Cat c;
    Cow cow;
    animals[0] = &d;
    animals[1] = &c;
    animals[2] = &cow;

    for(int i=0;i<3;i++)
        animals[i]->speak();
    return 0;
}
