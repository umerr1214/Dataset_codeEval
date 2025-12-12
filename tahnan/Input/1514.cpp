#include <iostream>
using namespace std;

class CPU {
public:
    double clockSpeed;
    int coreCount;

    CPU(double c, int cores) {
        clockSpeed = c;
        coreCount = cores;
    }

    virtual void benchmark() {
        cout << "Generic CPU benchmark" << endl;
    }
};

class IntelCPU : public CPU {
public:
    IntelCPU(double c, int cores) : CPU(c, cores) {}

    void benchmark() override {
        cout << "Intel CPU Benchmark: " << clockSpeed * coreCount << endl;
    }
};

class AMDCPU : public CPU {
public:
    AMDCPU(double c, int cores) : CPU(c, cores) {}

    void benchmark() override {
        cout << "AMD CPU Benchmark: " << clockSpeed * coreCount * 0.9 << endl;
    }
};

int main() {
    IntelCPU i7(3.5, 8);
    AMDCPU ryzen(3.8, 8);
    i7.benchmark();
    ryzen.benchmark();
    return 0;
}
