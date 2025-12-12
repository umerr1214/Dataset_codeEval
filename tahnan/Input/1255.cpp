#include <iostream>
#include <vector>
using namespace std;

class Quiz {
public:
    class Question {
    public:
        string text;
        int answer;
        void display() 
        {
            cout << text << endl;
        }
    };

    vector<Question> questions;

    void addQuestion(Question q) 
    {
        questions.push_back(q);
    }

    int calculateScore() 
    {
        int score = 0;
        for(int i = 0; i < questions.size(); i++)
        {
            score += questions[i].answer;
        }
        return score;
    }
};

// SEMANTIC ERROR: derives from unrelated type
class MyQuiz : public int {};

int main() 
{
    Quiz qz;
    Quiz::Question q;
    q.text = "2+2?";
    q.answer = 4;
    qz.addQuestion(q);
    cout << "Score: " << qz.calculateScore() << endl;
    return 0;
}
