#include <iostream>
using namespace std;

class Flight {
    int duration;
public:
    void input() { cin >> duration; }
    friend Flight compare(Flight a, Flight b);
    void display() { cout << duration << endl; }
};

Flight compare(Flight a, Flight b) {
    // Semantic error: returns shorter flight instead of longer
    return (a.duration < b.duration) ? a : b;
}

int main() {
    Flight f1, f2;
    f1.input(); f2.input();
    Flight f3 = compare(f1,f2);
    f3.display();
    return 0;
}
