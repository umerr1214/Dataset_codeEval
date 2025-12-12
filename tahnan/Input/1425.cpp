#include <iostream>
#include <vector>
using namespace std;

class Movie {
public:
    string name;
    int duration;
    Movie(string n, int d) {
        name = n;
        duration = d
    }
};

class MovieSeries {
public:
    vector<Movie> movies;
    void addMovie(Movie m) {
        movies.push_back(m)
    }
    int totalDuration() {
        int total = 0;
        for(auto m : movies)
            total += m.duration;
        return total;
    }
};

int main() {
    MovieSeries series;
    series.addMovie(Movie("Movie1",120));
    series.addMovie(Movie("Movie2",150));
    cout << series.totalDuration() << endl;
    return 0;
}
