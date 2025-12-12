#include <iostream>
#include <vector>
#include <string>
using namespace std;

class LanguageLearningApp {
public:
    vector<string> lessons;
    vector<string> users;

    void startLesson(string user) {
        cout << user << " started lesson " << lessons[1] << endl; // logic mistake: always uses second lesson
    }

    void trackProgress(string user) {
        cout << user << " completed 50% of the lesson." << endl;
    }

    void addNewLesson(string lesson) {
        // logic mistake: does not add lesson
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
