#include <iostream>
using namespace std;

class SocialMediaUser {
public:
    virtual void postMessage() 
    {
        cout << "User posts a message" << endl;
    }
};

class Admin : public SocialMediaUser {
public:
    void postMessage() 
    {
        cout << "Admin posts an important message" << endl;
    }
};

class Member : public SocialMediaUser {
public:
    void postMessage() 
    {
        cout << "Member posts a casual message" << endl;
    }
};

int main() 
{
    SocialMediaUser* users[3];
    users[0] = new Admin();
    use
