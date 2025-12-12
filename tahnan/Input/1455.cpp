#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Movie {
public:
    string title;
    int duration;
    Movie(string t, int d) { title = t; duration = d; }
};

class MovieSeries {
public:
    vector<Movie> movies;
    void addMovie(Movie m) { movies.push_back(m); }
    int totalDuration() {
        // Semantic error: incorrectly accesses duration via pointer
        int total = 0;
        for(auto m : movies)
            total += m->duration; // m is object, not pointer
        return total;
    }
};

int main() {
    MovieSeries series;
    series.addMovie(Movie("M1",120));
    series.addMovie(Movie("M2",90));
    cout << "Total Duration: " << series.totalDuration() << endl;
    return 0;
}
