#include <iostream>
using namespace std;

class VirtualPet {
public:
    string name;
    int age;
    int hungerLevel;
    int happinessLevel;

    void feed() {
        hungerLevel += 10; // logic mistake, should decrease
    }

    void play() {
        happinessLevel -= 10; // logic mistake, should increase
    }

    void displayStatus() {
        cout << name << " Age:" << age << " Hunger:" << hungerLevel << " Happiness:" << happinessLevel << endl;
    }
};

int main() {
    VirtualPet pet;
    pet.name = "Buddy";
    pet.age = 3;
    pet.hungerLevel = 50;
    pet.happinessLevel = 60;

    pet.feed();
    pet.play();
    pet.displayStatus();

    return 0;
}
