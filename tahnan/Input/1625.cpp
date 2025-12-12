#include <iostream>
using namespace std;

class SmartSpeaker {
private:
    int volume;

public:
    SmartSpeaker() : volume(5) {}

    void play() { cout << "Playing "; }
    void pause() { cout << "Paused "; }
    void setVolume(int v) { volume = v; }
    void voiceCommand(const string &cmd) { cout << cmd << " "; }
    int getVolume() const { return volume; }
};

int main() {
    SmartSpeaker s;
    s.play();
    s.voiceCommand("NextTrack");
    s.pause();
    s.setVolume(7);
    cout << s.getVolume();
}
