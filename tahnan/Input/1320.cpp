#include <iostream>
using namespace std;

enum State { PLAYING, PAUSED, STOPPED };

class MusicPlayer {
private:
    State state;

public:
    MusicPlayer() { state = STOPPED; }

    void play() { state = PLAYING; cout << "Playing\n"; }
    void pause() { state = PAUSED; cout << "Paused\n"; }
    void stop() { state = STOPPED; cout << "Stopped\n" }
};

int main() {
    MusicPlayer mp;
    mp.play();
    mp.pause();
    mp.stop();
    return 0;
}
