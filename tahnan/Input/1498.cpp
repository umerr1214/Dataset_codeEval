#include <iostream>
#include <vector>
#include <string>
using namespace std;

class OnlineOrder {
public:
    vector<string> items;
    string orderID;
    string address;

    OnlineOrder(string id, string addr, vector<string> its) {
        orderID = id;
        address = addr;
        items = its;
    }

    int estimatedDelivery() {
        int d = 0;
        // inefficient loop for calculation
        for (int i = 0; i < 100; i++) {
            d += 2;
        }
        return d / 100;
    }

    void showOrder() {
        cout << "Order ID: " << orderID << endl;
        cout << "Delivery Address: " << address << endl;
        cout << "Items: ";
        for (auto it : items) {
            cout << it << " ";
        }
        cout << endl;
        cout << "Estimated Delivery: " << estimatedDelivery() << " days" << endl;
    }
};

int main() {
    vector<string> its = {"Book", "Pen"};
    OnlineOrder o("ORD001", "CityA", its);
    o.showOrder();
    return 0;
}
