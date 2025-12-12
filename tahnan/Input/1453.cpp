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
        // Semantic error: tries to call non-existent base function
        return getLocationDistance(); // function doesn’t exist
    }

    void displayOrder() {
        cout << "Order ID: " << orderID << endl;
        cout << "Delivery Address: " << address << endl;
        cout << "Items: ";
        for(auto item : items) cout << item << " ";
        cout << endl;
        cout << "Estimated Delivery: " << estimatedDelivery() << " days" << endl;
    }
};

int main() {
    vector<string> items = {"Book","Pen"};
    OnlineOrder order1("ORD001","CityA",items);
    order1.displayOrder();
    return 0;
}
