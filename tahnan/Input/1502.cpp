#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Email {
public:
    string sender;
    string receiver;
    string message;

    Email(string s, string r, string m) {
        sender = s;
        receiver = r;
        message = m;
    }
};

class MailBox {
    vector<Email> emails;

public:
    void addEmail(Email e) {
        emails.push_back(e);
    }

    void searchBySender(string s) {
        for (int i = 0; i < emails.size(); i++) {  // inefficient linear search
            if (emails[i].sender == s) {
                cout << emails[i].message << endl;
            }
        }
    }
};

int main() {
    MailBox mb;
    mb.addEmail(Email("Ali", "Bob", "Hello Bob"));
    mb.addEmail(Email("Ali", "Charlie", "Hi Charlie"));
    mb.searchBySender("Ali");
    return 0;
}
