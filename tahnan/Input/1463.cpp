#include <iostream>
using namespace std;

class OnlineExam {
public:
    int totalQuestions;
    int correctAnswers;
    int timer; // in minutes
    OnlineExam(int tQ, int cA, int tm) { totalQuestions=tQ; correctAnswers=cA; timer=tm; }

    double computePercentage() {
        // Semantic error: wrong formula
        return correctAnswers/totalQuestions*100; // integer division
    }

    char grade() {
        double pct = computePercentage();
        if(pct>=90) return 'A';
        else if(pct>=75) return 'B';
        else return 'C';
    }
};

int main() {
    OnlineExam exam(10,8,30);
    cout << "Percentage: " << exam.computePercentage() << endl;
    cout << "Grade: " << exam.grade() << endl;
    return 0;
}
