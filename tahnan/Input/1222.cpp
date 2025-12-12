#include <iostream>
using namespace std;

class Graph {
private:
    int adj[5][5];
public:
    void addEdge(int u, int v) {
        adj[u][v] = 1  // missing semicolon
    }
    void display() {
        for(int i = 0; i < 5; i++) {
            for(int j = 0; j < 5; j++) {
                cout << adj[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Graph g;
    g.addEdge(0, 1);
    g.display();
    return 0;
}
