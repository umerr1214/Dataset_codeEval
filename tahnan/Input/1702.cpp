#include <iostream>
#include <vector>
#include <string>
using namespace std;class OnlineVotingSystem{public:vector<string> candidates,voters;vector<int> votes;void castVote(string v,string c){for(int i=0;i<candidates.size();i++){if(candidates[i]==c){votes[i]++;cout<<v<<" voted "<<c<<"\n";return;}}cout<<"Candidate not found\n";}void displayResults(){for(int i=0;i<candidates.size();i++)cout<<candidates[i]<<":"<<votes[i]<<"\n";}};int main(){OnlineVotingSystem ovs;ovs.candidates={"Alice","Bob"};ovs.voters={"John"};ovs.votes={0,0};ovs.castVote("John","Alice");ovs.displayResults();return 0;}
