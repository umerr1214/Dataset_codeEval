#include <iostream>
#include <vector>
using namespace std;

class Movie {
public:
    string title;
    int duration;

    Movie(string t, int d) {
        title = t;
        duration = d;
    }
};

class MovieSeries {
    vector<Movie> movies;

public:
    void addMovie(Movie m) {
        movies.push_back(m);
    }

    int totalDuration() {
        int total = 0;
        for (int i = 0; i < movies.size(); i++) {  // inefficient loop
            total += movies[i].duration;
        }
        return total;
    }

    void display() {
        for (int i = 0; i < movies.size(); i++) {
            cout << movies[i].title << " ";
        }
        cout << "\nTotal Duration: " << totalDuration() << endl;
    }
};

int main() {
    MovieSeries ms;
    ms.addMovie(Movie("Movie1", 120));
    ms.addMovie(Movie("Movie2", 90));
    ms.display();
    return 0;
}
