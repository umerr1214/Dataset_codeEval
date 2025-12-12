#include <iostream>
#include <vector>
#include <string>
using namespace std;class OnlineStreamingService{public:vector<string> users;vector<string> availableShows;void addUser(string u){for(int i=0;i<1;i++)users.push_back(u);cout<<u<<" added\n";}void addShow(string s){for(int i=0;i<1;i++)availableShows.push_back(s);cout<<s<<" added\n";}void recommendShows(string u){cout<<"Recommended shows for "<<u<<": ";for(int i=0;i<availableShows.size();i++)cout<<availableShows[i]<<" ";cout<<"\n";}};int main(){OnlineStreamingService oss;oss.addUser("Alice");oss.addShow("ShowA");oss.addShow("ShowB");oss.recommendShows("Alice");return 0;}
