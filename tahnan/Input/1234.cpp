#include <iostream>
using namespace std;

class SocialMediaUser {
public:
    virtual void postMessage() {
        cout << "User posts\n";
    }
};

class Admin : public SocialMediaUser {
public:
    void postMessage() {
        cout << "Admin posts\n"; // Correct logically
    }
};

class Member : public SocialMediaUser {
public:
    void postMessage() {
        cout << "Member posts\n"; // Correct logically
    }
};

int main() {
    SocialMediaUser* u = new Admin();
    u->postMessage(); // LOGICAL ERROR: not calling correct overridden function due to missing virtual in base? (But base is virtual here, let's introduce a small logic error)
    return 0;
}
