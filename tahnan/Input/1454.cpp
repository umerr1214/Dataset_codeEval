#include <iostream>
using namespace std;

class CPU {
public:
    double clockSpeed;
    int coreCount;
    CPU(double clk, int cores) { clockSpeed = clk; coreCount = cores; }
    virtual void benchmark() { cout << "Generic CPU benchmark" << endl; }
};

class IntelCPU : public CPU {
public:
    IntelCPU(double clk, int cores) : CPU(clk, cores) {}
    void benchmark() override { cout << "Intel CPU benchmark" << endl; }
};

class AMDCPU : public CPU {
public:
    AMDCPU(double clk, int cores) : CPU(clk, cores) {}
    void benchmark() { cout << "Intel CPU benchmark" << endl; } // semantic error: missing override
};

int main() {
    IntelCPU i7(3.5,4);
    AMDCPU ryzen(3.8,6);
    i7.benchmark();
    ryzen.benchmark();
    return 0;
}
