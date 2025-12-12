#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Email {
public:
    string sender;
    string receiver;
    string message;
    Email(string s, string r, string m) { sender=s; receiver=r; message=m; }
};

class MailBox {
public:
    vector<Email> emails;
    void addEmail(Email e) { emails.push_back(e); }
    void searchBySender(string s) {
        for(auto e : emails)
            cout << e.message << endl; // Logical error: prints all emails
    }
};

int main() {
    MailBox box;
    box.addEmail(Email("Ali","Bob","Hello"));
    box.addEmail(Email("Sara","Bob","Hi"));
    box.searchBySender("Ali");
    return 0;
}
