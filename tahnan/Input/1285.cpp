#include <iostream>
#include <vector>
using namespace std;
class Quiz{public:class Question{public:string q,ans;Question(string ques,string a){q=ques;ans=a;}};vector<Question> questions;void add(string q,string a){questions.push_back(Question(q,a));}void display(){for(int i=0;i<questions.size();i++)cout<<questions[i].q<<endl;}int calculate(vector<string> answers){int score=0;for(int i=0;i<questions.size();i++)if(i<answers.size()&&answers[i]==questions[i].ans)score++;return score;}};int main(){Quiz q; q.add("2+2?","4");q.add("Capital of France?","Paris");q.display();vector<string> ans={"4","London"};cout<<"Score: "<<q.calculate(ans)<<endl;return 0;}
