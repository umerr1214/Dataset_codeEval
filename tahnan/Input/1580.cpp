#include <iostream>
#include <string>
using namespace std;

class SmartSpeaker {
private:
    bool playing;
    int volume; // 0–100
public:
    SmartSpeaker(){ playing=false; volume=50; }

    void play(){ playing=true; }
    void pause(){ playing=false; }

    void setVolume(int v){
        // Robustness issue: no check for out-of-range values
        volume=v;
    }

    void status(){
        cout<<"Playing: "<<(playing?"Yes":"No")<<", Volume: "<<volume<<endl;
    }
};

int main(){
    SmartSpeaker s;
    s.play();
    s.setVolume(70);
    s.status();
    return 0;
}
