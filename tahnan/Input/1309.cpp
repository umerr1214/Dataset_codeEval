#include <iostream>
using namespace std;

class SocialMediaUser {
public:
    virtual void postMessage() {
        cout << "User posts" << endl;
    }
};

class Admin : public SocialMediaUser {
public:
    void postMessage() {
        cout << "Admin posts important message" << endl;
    }
};

class Member : public SocialMediaUser {
public:
    void postMessage() {
        cout << "Member posts casual message" << endl;
    }
};

int main() {
    SocialMediaUser* users[2];
    users[0] = new Admin();
    users[1] = new Member();
    for(int i = 0; i < 2; i++) {
        users[i]->postMessage();
    }
    return 0;
}
