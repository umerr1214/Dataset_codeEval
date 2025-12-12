#include <iostream>
using namespace std;

enum State { PLAYING, PAUSED, STOPPED };

class MusicPlayer {
    State s;
public:
    MusicPlayer() {
        s = STOPPED;
    }
    
    void play() {
        s = PLAYING;
        cout << "Playing music" << endl;
    }
    
    void pause() {
        s = PAUSED;
        cout << "Music paused" << endl;
    }
    
    void stop() {
        s = STOPPED;
        cout << "Music stopped" << endl;
    }
};

int main() {
    MusicPlayer mp;
    mp.play();
    mp.pause();
    mp.stop();
    return 0;
}
