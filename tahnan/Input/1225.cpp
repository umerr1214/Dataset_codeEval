#include <iostream>
#include <vector>
using namespace std;

class Quiz {
public:
    class Question {
    public:
        string text;
        int answer;
        void display() {
            cout << text << endl  // missing semicolon
        }
    };
    vector<Question> questions;
    void addQuestion(Question q) {
        questions.push_back(q);
    }
};

int main() {
    Quiz qz;
    Quiz::Question q;
    q.text = "2+2?";
    q.answer = 4;
    qz.addQuestion(q);
    q.display();
    return 0;
}
