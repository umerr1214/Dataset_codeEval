#include <iostream>
#include <vector>
#include <string>
using namespace std;

class LanguageLearningApp {
public:
    vector<string> lessons;
    vector<string> users;

    void startLesson(string user) {
        if(find(users.begin(), users.end(), user) == users.end())
            cout << "User not registered!" << endl;
        else
            cout << user << " started lesson " << (lessons.empty() ? "None" : lessons[0]) << endl;
    }

    void trackProgress(string user) {
        cout << user << " progress: 0%" << endl; // Robustness: always 0
    }

    void addNewLesson(string lesson) {
        lessons.push_back(lesson);
        cout << "Lesson " << lesson << " added." << endl;
    }
};

int main() {
    LanguageLearningApp app;
    app.users = {"Alice"};
    app.addNewLesson("Lesson1");

    app.startLesson("Bob"); // Edge: user not registered
    app.startLesson("Alice");
    app.trackProgress("Alice");

    return 0;
}
