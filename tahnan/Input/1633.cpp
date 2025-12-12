This is file number 3
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class OnlineStreamingService {
public:
    vector<string> users;
    vector<string> availableShows

    void addUser(string user) {
        users.push_back(user)
    }

    void addShow(string show) {
        availableShows.push_back(show)
    }

    void recommendShows(string user) {
        cout << "Recommended shows for " << user << ": ";
        for(auto &s: availableShows) cout << s << " ";
        cout << endl;
    }
};

int main() {
    OnlineStreamingService service;
    service.addUser("Alice");
    service.addShow("Show1");
    service.addShow("Show2");
    service.recommendShows("Alice");

    return 0;
}
