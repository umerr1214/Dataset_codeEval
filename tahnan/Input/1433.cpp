#include <iostream>
using namespace std;

class OnlineExam {
public:
    int timer;
    int totalQuestions;
    int score;
    OnlineExam(int t, int q) {
        timer=t
        totalQuestions=q;
        score=0;
    }
    double percentage() {
        return (double)score/totalQuestions*100
    }
    char grade() {
        double p = percentage();
        if(p>=90) return 'A';
        else if(p>=75) return 'B';
        else return 'C';
    }
};

int main() {
    OnlineExam exam(60,5);
    exam.score=4;
    cout << exam.percentage() << " " << exam.grade() << endl;
    return 0;
}
