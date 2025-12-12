#include <iostream>
#include <fstream>
using namespace std;

class FileManager {
private:
    ofstream fout;

public:
    void createFile(string name) { fout.open(name); }
    void writeData(string data) { fout << data; }
    void closeFile() { fout.close(); }
};

int main() {
    FileManager fm;
    fm.createFile("data.txt");
    fm.writeData("Hello, World!");
    fm.closeFile();
    cout << "File written successfully\n";
    return 0;
}
