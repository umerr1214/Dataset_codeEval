#include <iostream>
#include <vector>
#include <string>
using namespace std;

class LanguageLearningApp {
private: // Semantic error: lessons should be public
    vector<string> lessons;
public:
    vector<string> users;

    void startLesson(string user) {
        cout << user << " started lesson " << lessons[0] << endl;
    }

    void trackProgress(string user) {
        cout << user << " completed 50% of the lesson." << endl;
    }

    void addNewLesson(string lesson) {
        lessons.push_back(lesson);
    }
};

int main() {
    LanguageLearningApp app;
    app.addNewLesson("Lesson1");
    app.addNewLesson("Lesson2");
    app.startLesson("Alice");
    app.trackProgress("Alice");

    return 0;
}
