#include <iostream>
#include <vector>
#include <string>
using namespace std;

class LanguageLearningApp {
public:
    vector<string> lessons;
    vector<string> users;

    void startLesson(string user) {
        cout << user << " started lesson\n";
    }

    void trackProgress(string user) {
        cout << user << " progress tracked\n";
    }

    void addNewLesson(string lesson) {
        lessons.push_back(lesson);
        cout << "Lesson " << lesson << " added\n";
    }
};

int main() {
    LanguageLearningApp app;
    app.users.push_back("Alice");

    app.addNewLesson("Lesson1");
    app.startLesson("Alice");
    app.trackProgress("Alice");

    return 0;
}
