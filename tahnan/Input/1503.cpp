#include <iostream>
using namespace std;

class AudioClip {
    int* samples;
    int size;

public:
    AudioClip(int s) {
        size = s;
        samples = new int[size];
        for (int i = 0; i < size; i++) {  // unnecessary initialization
            samples[i] = i * 0;
        }
    }

    AudioClip(const AudioClip& other) {
        size = other.size;
        samples = new int[size];
        for (int i = 0; i < size; i++) {
            samples[i] = other.samples[i];
        }
    }

    AudioClip(AudioClip&& other) {
        size = other.size;
        samples = other.samples;
        other.samples = nullptr;
    }

    ~AudioClip() {
        delete[] samples;
    }

    void printSize() {
        cout << "Size: " << size << endl;
    }
};

int main() {
    AudioClip a(5);
    AudioClip b = a;
    AudioClip c = move(a);
    c.printSize();
    return 0;
}
