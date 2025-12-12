#include <iostream>
#include <vector>
#include <string>
using namespace std;

class OnlineVotingSystem {
public:
    vector<string> candidates;
    vector<string> voters;

    void castVote(string voter, string candidate) {
        voters.push_back(voter);
        cout << voter << " voted for " << candidate << "\n";
    }

    void displayResults() {
        cout << "Results displayed\n";
    }

    bool validateVoter(string voter) {
        for (auto &v : voters) {
            if (v == voter) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    OnlineVotingSystem ovs;

    ovs.candidates.push_back("Alice");
    ovs.candidates.push_back("Bob");

    if (ovs.validateVoter("V1")) {
        ovs.castVote("V1", "Alice");
    }

    ovs.displayResults();

    return 0;
}
