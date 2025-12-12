#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Photo {
public:
    string name;
    Photo(string n) { name = n }
};

class PhotoAlbum {
private:
    vector<Photo> photos;
public:
    void addPhoto(Photo p) { photos.push_back(p); }
    void removePhoto(int index) { photos.erase(photos.begin() + index) }
    void displayPhotos() {
        for(int i=0;i<photos.size();i++)
            cout << photos[i].name << endl;
    }
};

int main() {
    PhotoAlbum album;
    album.addPhoto(Photo("Vacation"));
    album.addPhoto(Photo("Birthday"));
    album.displayPhotos();
    return 0;
}
