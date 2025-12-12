#include <iostream>
using namespace std;

class SocialMediaUser {
public:
    virtual void postMessage() 
    {
        cout << "User posts\n";
    }
};

class Admin : public SocialMediaUser {
public:
    void postMessage() 
    {
        cout << "Admin posts\n";
    }
};

class Member : public SocialMediaUser {
public:
    void postMessage() 
    {
        cout << "Member posts\n";
    }
};

// SEMANTIC ERROR: main uses wrong pointer type
int main() 
{
    SocialMediaUser m;
    Admin* a = (Admin*)&m;
    a->postMessage();
    return 0;
}
