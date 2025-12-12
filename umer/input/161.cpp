#include <iostream>
using namespace std;

// Readability issue: Poor class naming and no documentation
class A {
public:
    // Readability issue: Poor method naming
    char* f() {
        return "speak() called.";
    }
};

// Readability issue: Poor class naming
class B : public A {
public:
    // Readability issue: Poor method naming
    char* f() {
        return "woof!";
    }
};

int main() {
    // Readability issue: Poor variable naming
    A x;
    B y;
    A *p1 = &x;
    B *p2 = &y;
    
    // Efficiency issue: Multiple cout statements instead of single formatted output
    cout << x.f() << endl;
    cout << y.f() << endl;
    cout << p1->f() << endl;
    cout << p2->f() << endl;
    
    // Readability issue: Complex scope resolution without explanation
    cout << p2->A::f() << endl;
    
    return 0;
}