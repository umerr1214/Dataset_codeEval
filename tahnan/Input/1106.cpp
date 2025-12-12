#include <iostream>
using namespace std;

class Movie {
private:
    string title
    string genre
    double rating;

public:
    void input() {
        cout << "Enter title, genre and rating: ";
        cin >> title >> genre >> rating
    }

    void display() {
        cout << title << " " << genre << " " << rating << endl;
    }
};

int main() {
    Movie m;
    m.input();
    m.display()
    return 0;
}
