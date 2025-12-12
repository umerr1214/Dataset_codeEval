#include <iostream>
using namespace std;
class Graph{int adj[3][3];int n;public:Graph(int x){n=x;for(int i=0;i<n;i++)for(int j=0;j<n;j++)adj[i][j]=0;}void addEdge(int u,int v){adj[u][v]=1;adj[v][u]=1;}void display(){for(int i=0;i<n;i++){for(int j=0;j<n;j++)cout<<adj[i][j]<<" ";cout<<endl;}}};int main(){Graph g(3);g.addEdge(0,1);g.addEdge(1,2);g.display();return 0;}
