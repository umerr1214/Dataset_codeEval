#include <iostream>
#include <string>
using namespace std;

class SmartSpeaker {
private:
    int volume;
public:
    SmartSpeaker(){ volume=5; }

    void play(){ cout<<"Playing"<<endl; }
    void pause(){ cout<<"Paused"<<endl; }
    void setVolume(int v){ volume=v; } // Semantic error: volume not validated
    void voiceCommand(string cmd){ cout<<"Command: "<<cmd<<endl; }
};

int main() {
    SmartSpeaker s;
    s.play();
    s.setVolume(7);
    s.voiceCommand("Next Song");
    s.pause();
    return 0;
}
