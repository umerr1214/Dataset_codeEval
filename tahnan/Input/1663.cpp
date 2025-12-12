#include <iostream>
#include <vector>
#include <string>
using namespace std;

class OnlineStreamingService {
private: // Semantic error: should be public for correct method calls
    vector<string> users;
    vector<string> availableShows;

public:
    void addUser(string user) {
        users.push_back(user);
    }

    void addShow(string show) {
        availableShows.push_back(show);
    }

    void recommendShows(string user) {
        cout << "Recommended shows for " << user << ": ";
        for(auto &s: availableShows) cout << s << " ";
        cout << endl;
    }
};

int main() {
    OnlineStreamingService service;
    service.users.push_back("Alice"); // Semantic error: accessing private member
    service.addShow("Show1");
    service.addShow("Show2");
    service.recommendShows("Alice");

    return 0;
}
