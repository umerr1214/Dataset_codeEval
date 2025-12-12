#include <iostream>
#include <vector>
#include <string>
using namespace std;

class OnlineStreamingService {
public:
    vector<string> users;
    vector<string> availableShows;

    void addUser(string user) {
        users.push_back(user);
        cout << user << " added.\n";
    }

    void addShow(string show) {
        availableShows.push_back(show);
        cout << show << " added.\n";
    }

    void recommendShows(string user) {
        bool found = false;
        for (auto &u : users) {
            if (u == user) {
                found = true;
                break;
            }
        }

        if (!found) {
            cout << "User not found!\n";
        } else {
            cout << "Recommended shows for " << user << ": ";
            for (auto &s : availableShows) {
                cout << s << " ";
            }
            cout << "\n";
        }
    }
};

int main() {
    OnlineStreamingService oss;

    oss.addUser("Alice");
    oss.addShow("ShowA");
    oss.addShow("ShowB");

    oss.recommendShows("Bob");    // Edge case: non-existing user
    oss.recommendShows("Alice");

    return 0;
}
