#include <iostream>
#include <vector>
#include <string>
using namespace std;class QuizGame{public:class Question{public:string q;int a;Question(string x,int y){q=x;a=y;}};class Player{public:string n;int s;Player(string x){n=x;s=0;}void score(int x){s+=x;}};vector<Question> qs;vector<Player> ps;void addQ(string q,int a){qs.push_back(Question(q,a));}void addP(string n){ps.push_back(Player(n));}void show(){for(auto &p:ps)cout<<p.n<<" ";}};int main(){QuizGame q;q.addP("Ali");q.addQ("2+2?",4);q.show();}
