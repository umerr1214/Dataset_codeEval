#include <iostream>
#include <string>
using namespace std;

class VirtualPet {
public:
    string name;
    int age;
    int hungerLevel;
    int happinessLevel;

    void feed(int food) {
        hungerLevel -= food;
        if(hungerLevel < 0) cout << name << " is overfed!" << endl;
        else cout << name << " fed." << endl;
    }

    void play(int time) {
        happinessLevel += time;
        if(happinessLevel > 100) cout << name << " is overexcited!" << endl;
        else cout << name << " played." << endl;
    }

    void displayStatus() {
        cout << name << " Age:" << age << " Hunger:" << hungerLevel << " Happiness:" << happinessLevel << endl;
    }
};

int main() {
    VirtualPet pet;
    pet.name = "Buddy";
    pet.age = 2;
    pet.hungerLevel = 10;
    pet.happinessLevel = 95;

    pet.feed(15);  // Edge case: overfed
    pet.play(10);  // Edge case: overexcited
    pet.displayStatus();

    return 0;
}
