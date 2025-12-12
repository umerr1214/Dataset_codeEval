#include <iostream>
using namespace std;

class Attackable {
public:
    virtual void attack() = 0;
};

class GameCharacter {
protected:
    string name;
public:
    void inputName() {
        cin >> name;
    }
};

class Warrior : public GameCharacter, public Attackable {
public:
    void attack() override {
        cout << name << " slashes with sword" << endl;
    }
};

class Archer : public GameCharacter, public Attackable {
public:
    void attack() override {
        cout << name << " shoots arrow" << endl;
    }
};

class Mage : public GameCharacter, public Attackable {
public:
    void attack() override {
        cout << name << " casts spell" << endl;
    }
};

int main() {
    Warrior w;
    Archer a;
    Mage m;
    w.inputName();
    a.inputName();
    m.inputName();
    w.attack();
    a.attack();
    m.attack();
    return 0;
}
