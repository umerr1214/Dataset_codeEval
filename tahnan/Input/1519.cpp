#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Player {
public:
    string name;
    int score;

    Player(string n, int s) {
        name = n;
        score = s;
    }
};

class Leaderboard {
    vector<Player> players;

public:
    void addPlayer(Player p) {
        players.push_back(p);
    }

    void displayTop(int N) {
        sort(players.begin(), players.end(), [](Player a, Player b){ return a.score > b.score; });
        for (int i = 0; i < N && i < players.size(); i++) {
            cout << players[i].name << ": " << players[i].score << endl;
        }
    }
};

int main() {
    Leaderboard lb;
    lb.addPlayer(Player("Alice", 80));
    lb.addPlayer(Player("Bob", 95));
    lb.addPlayer(Player("Charlie", 90));
    lb.displayTop(2);
    return 0;
}
