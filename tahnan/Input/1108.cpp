#include <iostream>
using namespace std;

class Animal {
public:
    virtual void speak() = 0
};

class Dog : public Animal {
public:
    void speak() {
        cout << "Woof!" << endl
    }
};

class Cat : public Animal {
public:
    void speak() {
        cout << "Meow!" << endl
    }
};

int main() {
    Animal* a[2];
    Dog d;
    Cat c;
    a[0] = &d
    a[1] = &c
    for(int i=0;i<2;i++)
        a[i]->speak()
    return 0;
}
