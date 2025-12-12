#include <iostream>
using namespace std;

class AudioClip {
public:
    int* samples;
    int size;
    AudioClip(int s) {
        size = s
        samples = new int[size];
    }
    AudioClip(const AudioClip &a) {
        size = a.size;
        samples = new int[size];
        for(int i=0;i<size;i++)
            samples[i] = a.samples[i];
    }
    ~AudioClip() {
        delete [] samples
    }
};

int main() {
    AudioClip clip(5);
    return 0;
}
