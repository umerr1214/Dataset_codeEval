#include <iostream>
using namespace std;class FitnessTracker{public:int s,c,h;FitnessTracker(int x,int y,int z){s=x;c=y;h=z;}void update(int x,int y,int z){s=x;c=y;h=z;}void show(){cout<<s<<" "<<c<<" "<<h;}};int main(){FitnessTracker f(1000,200,70);f.update(3000,500,80);f.show();}
