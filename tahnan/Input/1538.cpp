#include <iostream>
#include <vector>
#include <string>
using namespace std;

class QuizGame {
public:
    class Question {
    public:
        string q,a;
        Question(string ques,string ans){q=ques a=ans;}
    };
    class Player {
    public:
        string name;
        int score;
        Player(string n){name=n; score=0;}
    };
    vector<Question> questions;
    vector<Player> players;
    void addQuestion(Question q){questions.push_back(q);}
    void addPlayer(Player p){players.push_back(p);}
    void playRound(){cout<<"Round Played"<<endl;}
};

int main() {
    QuizGame q;
    q.addQuestion(QuizGame::Question("Q1","A1"));
    q.addPlayer(QuizGame::Player("Alice"));
    q.playRound();
    return 0;
}
