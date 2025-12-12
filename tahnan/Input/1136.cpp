#include <iostream>
using namespace std;

class Movie {
protected:
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

class MovieList {
    Movie* movies;
    int n;
public:
    MovieList(int size) { n = size; movies = new Movie[n]; }
    void inputMovies() {
        for(int i=0;i<n;i++) movies[i].input();
    }
    Movie highestRated() {
        // Semantic error: should return reference or object; returns pointer incorrectly
        Movie* max = &movies[0];
        for(int i=1;i<n;i++)
            if(movies[i].rating > max->rating) max = &movies[i];
        return *max;
    }
};

int main() {
    MovieList ml(2);
    ml.inputMovies();
    Movie m = ml.highestRated();
    m.display();
    return 0;
}
