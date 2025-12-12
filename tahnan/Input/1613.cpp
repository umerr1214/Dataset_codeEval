#include <iostream>
#include <vector>
#include <string>
using namespace std;

class QuizGame {
public:
    class Question {
    public:
        string q;
        string ans;
        Question(string ques, string a) { q = ques; ans = a; }
    };

    class Player {
    public:
        string name;
        int score;
        Player(string n) { name = n; score = 0; }
    };

    vector<Question> questions;
    vector<Player> players;

    void addQuestion(string q, string a) { questions.push_back(Question(q, a)); }
    void addPlayer(string n) { players.push_back(Player(n)); }

    void displayScore() {
        for (int i = 0; i < players.size(); i++)
            cout << players[i].name << ":" << players[i].score << " ";
    }
};

int main() {
    QuizGame game;
    game.addPlayer("Ali");
    game.addQuestion("2+2?", "4");
    game.displayScore();
}
