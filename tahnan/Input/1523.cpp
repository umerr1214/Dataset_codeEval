#include <iostream>
using namespace std;

class OnlineExam {
    int totalQuestions;
    int correctAnswers;
    int timer; // in minutes

public:
    OnlineExam(int t, int time) {
        totalQuestions = t;
        correctAnswers = 0;
        timer = time;
    }

    void answerQuestion(bool correct) {
        if (correct) correctAnswers++;
    }

    double computePercentage() {
        return (double)correctAnswers / totalQuestions * 100;
    }

    char grade() {
        double p = computePercentage();
        if (p >= 90) return 'A';
        else if (p >= 75) return 'B';
        else if (p >= 60) return 'C';
        else return 'F';
    }

    void displayResult() {
        cout << "Score: " << computePercentage() << "%, Grade: " << grade() << endl;
    }
};

int main() {
    OnlineExam exam(5, 60);
    exam.answerQuestion(true);
    exam.answerQuestion(true);
    exam.answerQuestion(false);
    exam.answerQuestion(true);
    exam.answerQuestion(false);
    exam.displayResult();
    return 0;
}
