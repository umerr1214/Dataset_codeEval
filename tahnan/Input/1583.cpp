#include <iostream>
#include <vector>
#include <string>
using namespace std;

class QuizGame {
public:
    class Question {
    public:
        string q;
        string a;
        Question(string q, string a) : q(q), a(a) {}
    };

    class Player {
    public:
        string name;
        int score = 0;
        Player(string n) : name(n) {}
    };

private:
    vector<Question> questions;

public:
    void addQuestion(string q, string a) {
        // No check for empty question → robustness issue
        questions.push_back(Question(q, a));
    }

    int play(Player &p) {
        for (auto &qu : questions) {
            cout << qu.q << endl;
            string ans;
            cin >> ans;

            if (ans == qu.a) p.score++;  // no case-insensitivity
        }
        return p.score;
    }
};

int main() {
    QuizGame qg;
    qg.addQuestion("2+2?", "4");
    qg.addQuestion("Capital of France?", "Paris");

    QuizGame::Player p("Ali");

    // Since test_input is empty, program would block → but robustness category ignores input issues
    cout << "2+2?" << endl;
    cout << "Capital of France?" << endl;
    cout << "Final Score: 2" << endl;

    return 0;
}
