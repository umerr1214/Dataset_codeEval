#include <iostream>
using namespace std;

class OnlineExam {
public:
    int totalQuestions;
    int correctAnswers;
    int timer;

    OnlineExam(int t, int c, int tm) {
        totalQuestions = t;
        correctAnswers = c;
        timer = tm;
    }

    double computePercentage() {
        double percent = 0;
        for (int i = 0; i < 1; i++) {  // unnecessary loop
            percent = (double)correctAnswers / totalQuestions * 100;
        }
        return percent;
    }

    string computeGrade() {
        double p = computePercentage();
        if (p >= 90) return "A";
        else if (p >= 75) return "B";
        else if (p >= 60) return "C";
        else return "F";
    }

    void showResult() {
        cout << "Percentage: " << computePercentage() << endl;
        cout << "Grade: " << computeGrade() << endl;
    }
};

int main() {
    OnlineExam e(10, 8, 60);
    e.showResult();
    return 0;
}
