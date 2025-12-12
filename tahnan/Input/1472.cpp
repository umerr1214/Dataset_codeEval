#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Email {
public:
    string sender, receiver, message;
    Email(string s,string r,string m){sender=s;receiver=r;message=m;}
};

class MailBox {
public:
    vector<Email> emails;
    void addEmail(Email e){ emails.push_back(e); }
    void searchBySender(string s){
        // Robustness issue: no check if sender exists
        for(auto e: emails)
            if(e.sender == s)
                cout << e.message << endl;
    }
};

int main() {
    MailBox box;
    box.addEmail(Email("Ali","Bob","Hello"));
    box.addEmail(Email("Sara","Bob","Hi"));
    box.searchBySender("Ali");
    return 0;
}
