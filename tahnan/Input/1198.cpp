#include <iostream>
using namespace std;

class Animal {
public:
    virtual void speak() {
        cout << "Some sound" << endl;
    }
};

class Dog : public Animal {
public:
    void speak() override {
        cout << "Woof" << endl;
    }
};

class Cat : public Animal {
public:
    void speak() override {
        cout << "Meow" << endl;
    }
};

class Cow : public Animal {
public:
    void speak() override {
        cout << "Moo" << endl;
    }
};

int main() {
    Animal* animals[3];
    animals[0] = new Dog();
    animals[1] = new Cat();
    animals[2] = new Cow();

    for (int i = 0; i < 3; i++) {
        animals[i]->speak();
    }

    for (int i = 0; i < 3; i++) {
        delete animals[i];
    }

    return 0;
}
