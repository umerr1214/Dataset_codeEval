#include <iostream>
using namespace std;

class VirtualPet {
protected: // Semantic misuse: attributes should be private
    int hungerLevel;
    int happinessLevel;

public:
    string name;
    int age;

    void feed() {
        hungerLevel -= 10;
    }

    void play() {
        happinessLevel += 10;
    }

    void displayStatus() {
        cout << name << " Age:" << age << " Hunger:" << hungerLevel << " Happiness:" << happinessLevel << endl;
    }
};

int main() {
    VirtualPet pet;
    pet.name = "Buddy";
    pet.age = 3;
    pet.hungerLevel = 50; // Semantic error: protected member accessed
    pet.happinessLevel = 60;

    pet.feed();
    pet.play();
    pet.displayStatus();

    return 0;
}
