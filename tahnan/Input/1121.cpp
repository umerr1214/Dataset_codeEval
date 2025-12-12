#include <iostream>
using namespace std;

class Movie {
private:
    string title, genre;
    double rating;

public:
    void input() {
        cin >> title >> genre >> rating;
    }

    void display() {
        cout << title << " " << genre << " " << rating << endl;
    }
};

int main() {
    int n;
    cin >> n;
    Movie movies[n];
    for(int i = 0; i < n; i++)
        movies[i].input();

    // Logical error: finds the lowest-rated movie instead of highest
    double bestRating = 1e9;
    int idx = 0;
    for(int i = 0; i < n; i++) {
        if(movies[i].rating < bestRating) {
            bestRating = movies[i].rating;
            idx = i;
        }
    }

    movies[idx].display();
    return 0;
}
