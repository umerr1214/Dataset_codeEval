#include <iostream>
using namespace std;

class Animal {
public:
    void speak() { cout << "Some sound\n"; } // Semantic error: should be virtual
};

class Dog : public Animal {
public:
    void speak() { cout << "Meow\n"; } // wrong sound
};

class Cat : public Animal {
public:
    void speak() { cout << "Woof\n"; } // wrong sound
};

class Cow : public Animal {
public:
    void speak() { cout << "Moo\n"; }
};

int main() {
    Animal* animals[3];
    Dog d; Cat c; Cow co;
    animals[0] = &d; animals[1] = &c; animals[2] = &co;
    for(int i=0;i<3;i++) animals[i]->speak();
    return 0;
}
