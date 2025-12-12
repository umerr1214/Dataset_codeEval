#include <iostream>
using namespace std;

class Graph {
private:
    int adj[3][3] = {0};
public:
    void addEdge(int u, int v) 
    {
        if(u >= 3 || v >= 3) return; // robustness
        adj[u][v] = 1;
    }

    void display() 
    {
        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                cout << adj[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() 
{
    Graph g;
    g.addEdge(0,1);
    g.addEdge(0,3); // robustness: invalid index ignored
    g.display();
    return 0;
}
