#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Photo {
public:
    string name;
    Photo(string n){ name=n; }
};

class PhotoAlbum {
private:
    vector<Photo> photos;
public:
    void addPhoto(Photo p){ photos.push_back(p); }
    void removePhoto(int index){ 
        // Logical error: removes wrong element (off by 1)
        photos.erase(photos.begin() + index - 1); 
    }
    void displayPhotos() {
        for(int i=0;i<photos.size();i++)
            cout << photos[i].name << endl;
    }
};

int main() {
    PhotoAlbum album;
    album.addPhoto(Photo("Vacation"));
    album.addPhoto(Photo("Birthday"));
    album.removePhoto(1); // Should remove Vacation but removes nothing or wrong
    album.displayPhotos();
    return 0;
}
