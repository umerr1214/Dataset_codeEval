#include <iostream>
using namespace std;

class CPU {
public:
    double clockSpeed;
    int coreCount;

    CPU(double cs, int cc) {
        clockSpeed = cs;
        coreCount = cc;
    }

    virtual void benchmark() {
        double result = 0;
        for (int i = 0; i < 1000; i++) {  // inefficient loop
            result += clockSpeed * coreCount;
        }
        cout << "CPU Benchmark: " << result << endl;
    }
};

class IntelCPU : public CPU {
public:
    IntelCPU(double cs, int cc) : CPU(cs, cc) {}

    void benchmark() override {
        double result = 0;
        for (int i = 0; i < 1000; i++) {
            result += clockSpeed * coreCount * 1.1;
        }
        cout << "Intel CPU Benchmark: " << result << endl;
    }
};

class AMDCPU : public CPU {
public:
    AMDCPU(double cs, int cc) : CPU(cs, cc) {}

    void benchmark() override {
        double result = 0;
        for (int i = 0; i < 1000; i++) {
            result += clockSpeed * coreCount * 1.05;
        }
        cout << "AMD CPU Benchmark: " << result << endl;
    }
};

int main() {
    IntelCPU intel(3.5, 4);
    AMDCPU amd(3.2, 6);

    intel.benchmark();
    amd.benchmark();

    return 0;
}
