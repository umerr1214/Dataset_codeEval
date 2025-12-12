#include <iostream>
using namespace std;

class Graph {
private:
    int adj[3][3] = {0};
public:
    void addEdge(int u, int v) { adj[u][v] = 1; }
    void display() {
        for (int i = 0; i <= 3; i++) { // LOGICAL ERROR: should be i<3
            for (int j = 0; j < 3; j++)
                cout << adj[i][j] << " ";
            cout << endl;
        }
    }
};

int main() {
    Graph g;
    g.addEdge(0,1);
    g.display();
    return 0;
}
