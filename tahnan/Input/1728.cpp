#include <iostream>
using namespace std;

class VirtualPet {
public:
    string name;
    int age;
    int hungerLevel;
    int happinessLevel;

    void feed(int food) {
        hungerLevel -= food;
        if (hungerLevel < 0) {
            hungerLevel = 0;
        }
        cout << "Fed " << food << "\n";
    }

    void play(int time) {
        happinessLevel += time;
        cout << "Played " << time << "\n";
    }

    void displayStatus() {
        cout << name << " Hunger: " << hungerLevel << " Happiness: " << happinessLevel << "\n";
    }
};

int main() {
    VirtualPet vp;
    vp.name = "Fluffy";
    vp.age = 2;
    vp.hungerLevel = 50;
    vp.happinessLevel = 40;

    vp.feed(20);
    vp.play(15);
    vp.displayStatus();

    return 0;
}
