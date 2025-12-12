#include <iostream>
#include <vector>
using namespace std;

class ECommerceCart {
    vector<pair<string,int>> items;
public:
    void addItem(string name, int price) {
        items.push_back({name, price});
    }
    
    void removeItem(string name) {
        for(int i = 0; i < items.size(); i++) {
            if(items[i].first == name) {
                items.erase(items.begin() + i);
                break;
            }
        }
    }
    
    int totalPrice() {
        int sum = 0;
        for(auto p : items) {
            sum += p.second;
        }
        return sum;
    }
    
    void display() {
        for(auto p : items) {
            cout << p.first << ":" << p.second << " ";
        }
        cout << endl;
    }
};

int main() {
    ECommerceCart cart;
    cart.addItem("Shirt", 500);
    cart.addItem("Pants", 700);
    cart.display();
    cout << "Total:" << cart.totalPrice() << endl;
    return 0;
}
