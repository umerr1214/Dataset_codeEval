#include <iostream>
using namespace std;

class Movie {
public:
    string title, genre;
    double rating;
    void input() {
        cin >> title >> genre >> rating;
    }
    void display() {
        cout << title << " " << genre << " " << rating << endl;
    }
};

Movie highestRated(Movie* movies, int n) {
    Movie max = movies[0];
    for(int i=1;i<n;i++)
        if(movies[i].rating > max.rating) max = movies[i];
    return max;
}

int main() {
    Movie movies[3];
    for(int i=0;i<3;i++) movies[i].input();
    Movie m = highestRated(movies,3);
    m.display();
    return 0;
}
