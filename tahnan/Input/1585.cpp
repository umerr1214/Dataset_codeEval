#include <iostream>
#include <vector>
#include <string>
using namespace std;

class EBook {
public:
    string title;
    int progress;

    EBook(string t) : title(t), progress(0) {}
};

class OnlineLibrary {
private:
    vector<EBook> books;

public:
    void add(string t) {
        books.push_back(EBook(t));
    }

    void borrow(string t) {
        for (auto &b : books) {
            if (b.title == t) {
                cout << "Borrowed: " << t << endl;
                return;
            }
        }
        // Robustness issue → no error message when book not found
    }

    void updateProgress(string t, int p) {
        for (auto &b : books) {
            if (b.title == t) {
                b.progress = p;  // no bounds check
            }
        }
    }

    void display() {
        for (auto &b : books) {
            cout << b.title << " - " << b.progress << "%\n";
        }
    }
};

int main() {
    OnlineLibrary lib;
    lib.add("Algorithms");
    lib.add("Data Structures");

    lib.borrow("Algorithms");
    lib.updateProgress("Algorithms", 40);
    lib.display();
    return 0;
}
