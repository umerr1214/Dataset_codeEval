#include <iostream>
using namespace std;

class VirtualPet {
public:
    string name;
    int age;
    int hungerLevel
    int happinessLevel;

    void feed() {
        hungerLevel -= 10
    }

    void play() {
        happinessLevel += 10
    }

    void displayStatus() {
        cout << name << " Age:" << age << " Hunger:" << hungerLevel << " Happiness:" << happinessLevel << endl
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
