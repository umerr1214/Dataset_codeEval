#include <iostream>
#include <vector>
using namespace std;

class ECommerceCart {
private:
    vector<string> items;

public:
    void addItem(string item) {
        items.push_back(item)
    }

    void removeItem(string item) {
        for(int i=0;i<items.size();i++){
            if(items[i]==item) items.erase(items.begin()+i);
        }
    }

    void display() {
        for(auto &i:items) cout << i << endl;
    }
};

int main() {
    ECommerceCart cart;
    cart.addItem("Shoes");
    cart.addItem("Shirt");
    cart.display();
    return 0;
}
