#include <iostream>
#include <vector>
#include <string>
using namespace std;

class OnlineVotingSystem {
public:
    vector<string> candidates;
    vector<string> voters

    void castVote(string voter, string candidate) {
        cout << voter << " voted for " << candidate << endl
    }

    void displayResults() {
        cout << "Results displayed." << endl;
    }

    void validateVoter(string voter) {
        cout << voter << " is validated." << endl;
    }
};

int main() {
    OnlineVotingSystem ovs;
    ovs.candidates.push_back("Alice");
    ovs.candidates.push_back("Bob");

    ovs.validateVoter("John");
    ovs.castVote("John","Alice");
    ovs.displayResults();

    return 0;
}
