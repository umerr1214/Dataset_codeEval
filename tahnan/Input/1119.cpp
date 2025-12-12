#include <iostream>
using namespace std;

class Attackable {
public:
    virtual void attack() = 0
};

class Warrior : public Attackable {
public:
    void attack() {
        cout << "Sword attack" << endl
    }
};

class Archer : public Attackable {
public:
    void attack() {
        cout << "Arrow attack" << endl
    }
};

int main() {
    Attackable* characters[2]
    Warrior w
    Archer a
    characters[0] = &w
    characters[1] = &a
    for(int i=0;i<2;i++)
        characters[i]->attack()
    return 0;
}
