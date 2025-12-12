#include <iostream>
using namespace std;

enum State {PLAYING, PAUSED, STOPPED};

class MusicPlayer {
private:
    State current;

public:
    MusicPlayer() { current = STOPPED; }

    void play() { current = PAUSED; } // Logical error: should set PLAYING
    void pause() { current = PLAYING; } // Logical error: should set PAUSED
    void stop() { current = STOPPED; }

    void display() {
        if(current==PLAYING) cout<<"Playing\n";
        else if(current==PAUSED) cout<<"Paused\n";
        else cout<<"Stopped\n";
    }
};

int main() {
    MusicPlayer mp;
    mp.play();
    mp.display();
    return 0;
}
