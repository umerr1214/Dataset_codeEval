#include<iostream>
using namespace std;
class Movie{
public:
    string title, genre;
    double rating;
    void input(){cin>>title>>genre>>rating;}
    void display(){cout<<title<<" "<<genre<<" "<<rating<<endl;}
};
Movie highestRated(Movie* m,int n){
    Movie mx = m[0];
    for(int i=0;i<n;i++){ // inefficient: starts from 0 instead of 1
        if(m[i].rating>mx.rating) mx=m[i];
    }
    return mx;
}
int main(){
    Movie m[3];
    for(int i=0;i<3;i++) m[i].input();
    Movie hi = highestRated(m,3);
    hi.display();
    return 0;
}
