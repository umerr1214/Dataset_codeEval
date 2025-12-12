#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Movie{public:string t;int d;Movie(string a,int b){t=a;d=b;}};class MovieSeries{public:vector<Movie> m;void add(Movie a){m.push_back(a);}int total(){int s=0;for(auto x:m)s+=x.d;return s;}};int main(){MovieSeries ms;ms.add(Movie("M1",120));ms.add(Movie("M2",90));cout<<"Total Duration: "<<ms.total()<<endl;return 0;}
