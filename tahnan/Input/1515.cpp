#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Movie {
public:
    string name;
    int duration;

    Movie(string n, int d) {
        name = n;
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
        for (int i = 0; i < movies.size(); i++) {
            total += movies[i].duration;
        }
        return total;
    }

    void displaySeries() {
        for (int i = 0; i < movies.size(); i++) {
            cout << movies[i].name << ": " << movies[i].duration << " min" << endl;
        }
        cout << "Total Duration: " << totalDuration() << " min" << endl;
    }
};

int main() {
    MovieSeries ms;
    ms.addMovie(Movie("Movie1", 120));
    ms.addMovie(Movie("Movie2", 90));
    ms.displaySeries();
    return 0;
}
