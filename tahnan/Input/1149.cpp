#include <iostream>
using namespace std;

class Attackable {
public:
    virtual void attack() = 0;
};

class Warrior : public Attackable {
public:
    void attack() { cout << "Shoot\n"; } // Semantic error: wrong attack
};

class Archer : public Attackable {
public:
    void attack() { cout << "Slash\n"; } // wrong attack
};

class Mage : public Attackable {
public:
    void attack() { cout << "Fireball\n"; }
};

int main() {
    Attackable* arr[3] = {new Warrior(), new Archer(), new Mage()};
    for(int i=0;i<3;i++) arr[i]->attack();
    return 0;
}
