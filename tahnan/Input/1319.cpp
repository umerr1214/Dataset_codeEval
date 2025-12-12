#include <iostream>
#include <fstream>
using namespace std;

class FileManager {
private:
    ofstream file;

public:
    void createFile(string filename) {
        file.open(filename)
    }

    void writeFile(string text) {
        if(file.is_open())
            file << text << endl;
    }

    void closeFile() {
        file.close();
    }
};

int main() {
    FileManager fm;
    fm.createFile("test.txt");
    fm.writeFile("Hello World");
    fm.closeFile();
    return 0;
}
