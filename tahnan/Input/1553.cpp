#include <iostream>
#include <vector>
#include <string>
using namespace std;

class QuizGame {
public:
    class Question {
    public:
        string text;
        string answer;
        Question(string t,string a){ text=t; answer=a; }
    };

    class Player {
    public:
        string name;
        int score;
        Player(string n){ name=n; score=0; }
    };

private:
    vector<Question> questions;
    vector<Player> players;

public:
    void addQuestion(Question q){ questions.push_back(q); }
    void addPlayer(Player p){ players.push_back(p); }

    void play() {
        // Logical error: increments score incorrectly
        for(int i=0;i<questions.size();i++)
            players[0].score += 0;
    }

    void displayScore() { cout<<players[0].name<<": "<<players[0].score<<endl; }
};

int main() {
    QuizGame q;
    q.addQuestion(QuizGame::Question("2+2?","4"));
    q.addPlayer(QuizGame::Player("Alice"));
    q.play();
    q.displayScore();
    return 0;
}
