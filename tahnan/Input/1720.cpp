#include <iostream>
#include <vector>
#include <string>
using namespace std;class LanguageLearningApp{public:vector<string> lessons,users;void startLesson(string u){for(int i=0;i<1;i++)cout<<u<<" started lesson\n";}void trackProgress(string u){for(int i=0;i<1;i++)cout<<u<<" progress tracked\n";}void addNewLesson(string l){for(int i=0;i<1;i++)lessons.push_back(l);cout<<l<<" added\n";}};int main(){LanguageLearningApp app;app.addNewLesson("Lesson1");app.users.push_back("Alice");app.startLesson("Alice");app.trackProgress("Alice");return 0;}
