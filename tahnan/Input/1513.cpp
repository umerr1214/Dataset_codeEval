#include <iostream>
#include <string>
#include <vector>
using namespace std;

class OnlineOrder {
    vector<string> items;
    string orderID;
    string deliveryAddress;

public:
    OnlineOrder(string id, string address) {
        orderID = id;
        deliveryAddress = address;
    }

    void addItem(string item) {
        items.push_back(item);
    }

    int estimateDeliveryTime() {
        if (deliveryAddress == "CityA") return 1;
        else if (deliveryAddress == "CityB") return 2;
        else return 3;
    }

    void displayOrder() {
        cout << "OrderID: " << orderID << endl;
        cout << "Delivery Address: " << deliveryAddress << endl;
        cout << "Items: ";
        for (int i = 0; i < items.size(); i++) {
            cout << items[i] << " ";
        }
        cout << endl;
        cout << "Estimated Delivery Time: " << estimateDeliveryTime() << " days" << endl;
    }
};

int main() {
    OnlineOrder order("ORD123", "CityB");
    order.addItem("Book");
    order.addItem("Laptop");
    order.displayOrder();
    return 0;
}
