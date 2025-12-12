#include <iostream>
using namespace std;

class AudioClip {
public:
    int* samples;
    int size;
    AudioClip(int s) {
        size = s;
        samples = new int[s];
        for(int i=0;i<=s;i++) samples[i]=0; // Logical error: out-of-bounds write
    }
    ~AudioClip() { delete [] samples; }
    void display() {
        for(int i=0;i<size;i++) cout << samples[i] << " ";
        cout << endl;
    }
};

int main() {
    AudioClip clip(3);
    clip.display();
    return 0;
}
