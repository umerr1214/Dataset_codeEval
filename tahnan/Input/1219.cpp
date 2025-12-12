#include <iostream>
using namespace std;

class SocialMediaUser {
public:
    virtual void postMessage() { cout << "User posts\n" << endl } // missing semicolon
};

class Admin : public SocialMediaUser {
public:
    void postMessage() { cout << "Admin posts\n"; }
};

int main() {
    Admin a;
    a.postMessage();
    return 0;
}
