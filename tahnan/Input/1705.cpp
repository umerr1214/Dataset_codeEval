#include <iostream>
#include <vector>
#include <string>
using namespace std;class LanguageLearningApp{public:vector<string> lessons,users;void startLesson(string u){cout<<u<<" started "<<(lessons.empty()?"None":lessons[0])<<"\n";}void trackProgress(string u){cout<<u<<" progress:0%\n";}void addNewLesson(string l){lessons.push_back(l);cout<<"Lesson "<<l<<" added\n";}};int main(){LanguageLearningApp app;app.users={"Alice"};app.addNewLesson("Lesson1");app.startLesson("Alice");app.trackProgress("Alice");return 0;}
