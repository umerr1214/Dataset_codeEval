#include <iostream>
using namespace std;

class Animal {
public:
    virtual void speak() { cout << "Some sound\n"; }
};

class Dog : public Animal {
public:
    void speak() { cout << "Woof\n"; }
};

class Cat : public Animal {
public:
    void speak() { cout << "Meow\n"; }
};

class Cow : public Animal {
public:
    void speak() { cout << "Moo\n"; }
};

int main() {
    Animal* animals[3];
    animals[0] = new Dog();
    animals[1] = new Cat();
    animals[2] = new Cow();
    for(int i=0;i<3;i++) animals[i]->speak();
    return 0;
}
