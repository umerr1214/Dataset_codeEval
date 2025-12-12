#include <iostream>
#include <vector>
#include <string>
using namespace std;class OnlineVotingSystem{public:vector<string> candidates,voters;void castVote(string v,string c){for(int i=0;i<1;i++)voters.push_back(v);cout<<v<<" voted for "<<c<<"\n";}void displayResults(){for(int i=0;i<1;i++)cout<<"Results displayed\n";}void validateVoter(string v){for(int i=0;i<1;i++)cout<<v<<" validated\n";}};int main(){OnlineVotingSystem ovs;ovs.castVote("Alice","Bob");ovs.validateVoter("Alice");ovs.displayResults();return 0;}
