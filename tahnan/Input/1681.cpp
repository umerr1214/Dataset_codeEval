#include <iostream>
#include <string>
using namespace std;

class PackageDelivery {
public:
    string packageID;
    string source;
    string destination;
    string status;

    void updateStatus(string s) {
        if(s != "In Transit" && s != "Delivered")
            cout << "Invalid status!" << endl;
        else {
            status = s;
            cout << "Status updated to " << s << endl;
        }
    }

    void trackPackage() {
        cout << "Package " << packageID << " is " << status << endl;
    }

    void displayDetails() {
        cout << "ID:" << packageID << " Source:" << source << " Destination:" << destination << " Status:" << status << endl;
    }
};

int main() {
    PackageDelivery pd;
    pd.packageID = "P123";
    pd.source = "CityA";
    pd.destination = "CityB";
    pd.status = "Pending";

    pd.updateStatus("Shipped");  // Edge case: invalid status
    pd.updateStatus("In Transit");
    pd.trackPackage();
    pd.displayDetails();

    return 0;
}
