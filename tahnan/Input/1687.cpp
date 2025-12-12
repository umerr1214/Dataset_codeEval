#include <iostream>
#include <vector>
#include <string>
using namespace std;

class OnlineVotingSystem {
public:
    vector<string> candidates;
    vector<string> voters;
    vector<int> votes;

    void castVote(string voter, string candidate) {
        if(find(voters.begin(), voters.end(), voter) == voters.end())
            cout << "Invalid voter!" << endl;
        else {
            bool found = false;
            for(int i = 0; i < candidates.size(); i++) {
                if(candidates[i] == candidate) {
                    votes[i]++;
                    found = true;
                    cout << voter << " voted for " << candidate << endl;
                    break;
                }
            }
            if(!found) cout << "Candidate not found!" << endl;
        }
    }

    void displayResults() {
        for(int i = 0; i < candidates.size(); i++)
            cout << candidates[i] << ": " << votes[i] << " votes" << endl;
    }

    void validateVoter(string voter) {
        if(find(voters.begin(), voters.end(), voter) != voters.end())
            cout << voter << " is valid." << endl;
        else
            cout << voter << " is invalid." << endl;
    }
};

int main() {
    OnlineVotingSystem ovs;
    ovs.candidates = {"Alice", "Bob"};
    ovs.voters = {"John"};
    ovs.votes = {0, 0};

    ovs.castVote("Mike", "Alice"); // Edge: invalid voter
    ovs.castVote("John", "Charlie"); // Edge: invalid candidate
    ovs.castVote("John", "Alice"); // Normal
    ovs.displayResults();

    return 0;
}
