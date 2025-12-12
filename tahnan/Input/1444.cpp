#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Leaderboard {
public:
    vector<pair<string,int>> players;
    void addPlayer(string name, int score) { players.push_back({name,score}); }
    void topN(int n) {
        // Logical error: sorts ascending instead of descending
        sort(players.begin(), players.end(), [](auto a, auto b){ return a.second < b.second; });
        for(int i=0;i<n && i<players.size();i++)
            cout << players[i].first << " " << players[i].second << endl;
    }
};

int main() {
    Leaderboard lb;
    lb.addPlayer("Ali",30);
    lb.addPlayer("Sara",50);
    lb.topN(2);
    return 0;
}
