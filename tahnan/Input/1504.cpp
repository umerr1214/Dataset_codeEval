#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Leaderboard {
    vector<pair<string,int>> players;

public:
    void addPlayer(string name, int score) {
        players.push_back({name, score});
    }

    void displayTop(int n) {
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < players.size(); j++) { // inefficient bubble sort
                if (players[j].second > players[i].second) {
                    swap(players[i], players[j]);
                }
            }
        }
        for (int i = 0; i < n && i < players.size(); i++) {
            cout << players[i].first << ": " << players[i].second << endl;
        }
    }
};

int main() {
    Leaderboard lb;
    lb.addPlayer("Alice", 50);
    lb.addPlayer("Bob", 70);
    lb.addPlayer("Charlie", 60);
    lb.displayTop(2);
    return 0;
}
