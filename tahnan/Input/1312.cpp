#include <iostream>
using namespace std;

class Graph {
    int adj[5][5];
    int n;
public:
    Graph(int nodes) { 
        n = nodes;
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                adj[i][j] = 0;
    }

    void addEdge(int u, int v) {
        if(u >= 0 && u < n && v >= 0 && v < n)
            adj[u][v] = 1;
    }

    void display() {
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++)
                cout << adj[i][j] << " ";
            cout << endl;
        }
    }
};

int main() {
    Graph g(3);
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.display();
    return 0;
}
