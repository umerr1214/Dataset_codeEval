#include <iostream>
#include <vector>
using namespace std;

class Quiz {
public:
    class Question {
    public:
        string q;
        string ans;
        Question(string ques, string a) { q = ques; ans = a; }
    };

    vector<Question> questions;

    void addQuestion(string ques, string ans) {
        questions.push_back(Question(ques, ans));
    }

    void displayQuestions() {
        for(auto &q : questions)
            cout << q.q << endl;
    }

    int calculateScore(vector<string> answers) {
        int score = 0;
        for(int i = 0; i < answers.size(); i++)
            if(i < questions.size() && answers[i] == questions[i].ans)
                score++;
        return score;
    }
};

int main() {
    Quiz quiz;
    quiz.addQuestion("2+2?", "4");
    quiz.addQuestion("Capital of France?", "Paris");
    quiz.displayQuestions();
    vector<string> userAns = {"4", "Paris"};
    cout << "Score: " << quiz.calculateScore(userAns) << endl;
    return 0;
}
