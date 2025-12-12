#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Photo {
public:
    string title;
    Photo(string t) : title(t) {}
};

class PhotoAlbum {
private:
    vector<Photo> photos;

public:
    void add(const string &title) { photos.push_back(Photo(title)); }

    void remove(const string &title) {
        photos.erase(remove_if(photos.begin(), photos.end(),
                               [&](const Photo &p) { return p.title == title; }),
                     photos.end());
    }

    void display() const {
        for (const auto &p : photos)
            cout << p.title << " ";
    }
};

int main() {
    PhotoAlbum album;
    album.add("Pic1");
    album.add("Pic2");
    album.display();
}
