#include <iostream>
using namespace std;

class AudioClip {
    int* samples;
    int size;

public:
    AudioClip(int s) {
        size = s;
        samples = new int[size];
        for (int i = 0; i < size; i++) samples[i] = 0;
    }

    AudioClip(const AudioClip& other) {
        size = other.size;
        samples = new int[size];
        for (int i = 0; i < size; i++) samples[i] = other.samples[i];
    }

    AudioClip(AudioClip&& other) noexcept {
        size = other.size;
        samples = other.samples;
        other.samples = nullptr;
        other.size = 0;
    }

    ~AudioClip() {
        delete[] samples;
    }

    void setSample(int index, int value) {
        if (index >= 0 && index < size) samples[index] = value;
    }

    void display() {
        for (int i = 0; i < size; i++) cout << samples[i] << " ";
        cout << endl;
    }
};

int main() {
    AudioClip clip(5);
    clip.setSample(0, 10);
    clip.setSample(1, 20);
    clip.display();
    return 0;
}
