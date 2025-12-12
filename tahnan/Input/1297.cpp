#include <iostream>
using namespace std;
class Graph{
    int adj[3][3];
    int n;
public:
    Graph(int x){n=x; for(int i=0;i<3;i++) for(int j=0;j<3;j++) adj[i][j]=0;} // inefficiently loops full 3x3 matrix
    void addEdge(int u,int v){adj[u][v]=1; adj[v][u]=1;}
    void display(){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++) cout<<adj[i][j]<<" ";
            cout<<endl;
        }
    }
};
int main(){
    Graph g(3);
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.display();
    return 0;
}
