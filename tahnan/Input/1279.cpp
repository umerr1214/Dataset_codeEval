#include <iostream>
using namespace std;
class SocialMediaUser{public:virtual void postMessage(){cout<<"User posts"<<endl;}};class Admin:public SocialMediaUser{public:void postMessage(){cout<<"Admin posts"<<endl;}};class Member:public SocialMediaUser{public:void postMessage(){cout<<"Member posts"<<endl;}};int main(){SocialMediaUser* u[3];u[0]=new Admin();u[1]=new Member();u[2]=new SocialMediaUser();for(int i=0;i<3;i++)u[i]->postMessage();return 0;}
