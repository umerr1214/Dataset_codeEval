#include <iostream>
#include <vector>
#include <string>
using namespace std;class OnlineStreamingService{public:vector<string> users;vector<string> availableShows;void addUser(string u){users.push_back(u);cout<<u<<" added\n";}void addShow(string s){availableShows.push_back(s);cout<<s<<" added\n";}void recommendShows(string u){cout<<"Recommended shows for "<<u<<": ";for(auto &s:availableShows)cout<<s<<" ";cout<<"\n";}};int main(){OnlineStreamingService oss;oss.addUser("Alice");oss.addShow("ShowA");oss.addShow("ShowB");oss.recommendShows("Alice");return 0;}
