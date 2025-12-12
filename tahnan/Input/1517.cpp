#include <iostream>
#include <string>
#include <vector>
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
    void receiveEmail(Email e) {
        emails.push_back(e);
    }

    void searchBySender(string s) {
        for (int i = 0; i < emails.size(); i++) {
            if (emails[i].sender == s) {
                cout << "To: " << emails[i].receiver << ", Message: " << emails[i].message << endl;
            }
        }
    }
};

int main() {
    MailBox box;
    box.receiveEmail(Email("Alice", "Bob", "Hello"));
    box.receiveEmail(Email("Charlie", "Bob", "Hi"));
    box.searchBySender("Alice");
    return 0;
}
