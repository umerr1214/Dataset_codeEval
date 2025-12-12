#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Photo {
public:
    string title;
    Photo(string t) { title = t; }
};

class PhotoAlbum {
public:
    vector<Photo> photos;

    void add(string t) {
        // inefficient: unnecessary loop
        for (int i = 0; i < 1; i++)
            photos.push_back(Photo(t));
    }

    void display() {
        // inefficient: uses indexing instead of range-for
        for (int i = 0; i < photos.size(); i++)
            cout << photos[i].title << " ";
    }
};

int main() {
    PhotoAlbum album;
    album.add("Pic1");
    album.add("Pic2");
    album.display();
}
