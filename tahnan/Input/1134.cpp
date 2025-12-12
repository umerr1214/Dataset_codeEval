#include <iostream>
using namespace std;

class Attackable {
public:
    virtual void attack() = 0;
};

class Warrior : public Attackable {
public:
    void attack() { cout << "Arrow attack\n"; } // Logical error: wrong attack
};

class Archer : public Attackable {
public:
    void attack() { cout << "Sword attack\n"; } // Logical error
};

int main() {
    Attackable* chars[2];
    Warrior w; Archer a;
    chars[0] = &w; chars[1] = &a;
    for(int i=0;i<2;i++)
        chars[i]->attack();
    return 0;
}
