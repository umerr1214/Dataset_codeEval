#include <iostream>
#include <fstream>
using namespace std;

class FileManager {
    ofstream fout;
public:
    void create(string filename) {
        fout.open(filename);
    }
    
    void write(string text) {
        fout << text;
    }
    
    void close() {
        if(fout.is_open()) {
            fout.close();
        }
    }
};

int main() {
    FileManager fm;
    fm.create("file.txt");
    fm.write("Hello World");
    fm.close();
    cout << "File operation done" << endl;
    return 0;
}
