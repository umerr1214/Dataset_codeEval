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
        cout << user << " added." << endl;
    }

    void addShow(string show) {
        availableShows.push_back(show);
        cout << show << " added." << endl;
    }

    void recommendShows(string user) {
        if(find(users.begin(), users.end(), user) == users.end())
            cout << "User not found!" << endl; // Edge case: user does not exist
        else {
            cout << "Recommended shows for " << user << ": ";
            for(auto &s: availableShows) cout << s << " ";
            cout << endl;
        }
    }
};

int main() {
    OnlineStreamingService oss;
    oss.addUser("Alice");
    oss.addShow("ShowA");
    oss.addShow("ShowB");
    oss.recommendShows("Bob");  // Edge case: non-existing user
    oss.recommendShows("Alice");

    return 0;
}
