#include <iostream>
using namespace std;

class Movie {
private:
    string title;
    string genre;
    double rating;

public:
    void input() {
        cin >> title >> genre >> rating;
    }

    void display() {
        cout << title << " " << genre << " " << rating << endl;
    }

    double getRating() {
        return rating;
    }
};

Movie highestRated(Movie* movies, int n) {
    Movie mx = movies[0];
    for (int i = 1; i < n; i++) {
        if (movies[i].getRating() > mx.getRating()) {
            mx = movies[i];
        }
    }
    return mx;
}

int main() {
    int n = 3;
    Movie movies[n];
    for (int i = 0; i < n; i++) {
        movies[i].input();
    }
    Movie hi = highestRated(movies, n);
    hi.display();
    return 0;
}
