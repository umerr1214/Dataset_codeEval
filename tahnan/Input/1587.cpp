#include <iostream>
#include <vector>
#include <string>
using namespace std;class Photo{public:string t;Photo(string x){t=x;}};class PhotoAlbum{public:vector<Photo> p;void add(string x){p.push_back(Photo(x));}void display(){for(auto &i:p)cout<<i.t<<" ";}};int main(){PhotoAlbum a;a.add("Pic1");a.add("Pic2");a.display();}
