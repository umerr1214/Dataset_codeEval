#include <iostream>
#include <fstream>
using namespace std;
class FileManager {
    ofstream f;
public:
    void create(string name) { f.open(name); }
    void write(string text) {
        for(int i=0;i<text.length();i++) f << text[i]; // inefficient char-wise writing
    }
    void close() { f.close(); }
};
int main() {
    FileManager f;
    f.create("file.txt");
    f.write("hello");
    f.close();
    cout << "Done" << endl;
    return 0;
}
