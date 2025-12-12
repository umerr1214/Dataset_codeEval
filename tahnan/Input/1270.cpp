#include <iostream>
#include <vector>
using namespace std;

class Quiz {
public:
    class Question {
    public:
        string q;
        string answer;
        Question(string ques, string ans) 
        {
            q = ques;
            answer = ans;
        }
    };

    vector<Question> questions;

    void addQuestion(string q, string ans) 
    {
        questions.push_back(Question(q, ans));
    }

    void displayQuestions() 
    {
        for(int i = 0; i < questions.size(); i++)
        {
            cout << questions[i].q << endl;
        }
    }

    int calculateScore(vector<string> answers) 
    {
        int score = 0;
        for(int i = 0; i < questions.size(); i++)
        {
            if(i < answers.size() && answers[i] == questions[i].answer)
            {
                score++;
            }
        }
        return score; // robustness: ignores extra answers
    }
};

int main() 
{
    Quiz qz;
    qz.addQuestion("2+2?", "4");
    qz.addQuestion("Capital of France?", "Paris");
    qz.displayQuestions();
    vector<string> answers = {"4", "London"};
    cout << "Score: " << qz.calculateScore(answers) << endl;
    return 0;
}
