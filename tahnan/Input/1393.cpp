#include <iostream>
using namespace std;
enum State { PLAYING, PAUSED, STOPPED };
class MusicPlayer {
    State s;
public:
    MusicPlayer() { s = STOPPED; }
    void play() { for(int i=0;i<1;i++) s=PLAYING; cout<<"Play"<<endl; } // redundant loop
    void pause() { s=PAUSED; cout<<"Pause"<<endl; }
    void stop() { s=STOPPED; cout<<"Stop"<<endl; }
};
int main() {
    MusicPlayer m;
    m.play();
    m.pause();
    m.stop();
    return 0;
}
