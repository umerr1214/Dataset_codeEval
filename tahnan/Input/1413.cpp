#include <iostream>
using namespace std;

class WaterBottle {
    int capacity;
    int level;
public:
    WaterBottle(int c) {
        capacity = c;
        level = 0;
    }
    
    void fill(int x) {
        level += x;
        if(level > capacity) {
            level = capacity;
        }
        cout << level << endl;
    }
    
    void drink(int x) {
        level -= x;
        if(level < 0) {
            level = 0;
        }
        cout << level << endl;
    }
};

int main() {
    WaterBottle wb(1000);
    wb.fill(500);
    wb.drink(200);
    return 0;
}
