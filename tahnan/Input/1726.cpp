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
        status = s;
        cout << "Status updated: " << s << "\n";
    }

    void trackPackage() {
        cout << "Package " << packageID << " is " << status << "\n";
    }

    void displayDetails() {
        cout << "Package " << packageID << " from " << source << " to " << destination << "\n";
    }
};

int main() {
    PackageDelivery pd;
    pd.packageID = "P001";
    pd.source = "CityA";
    pd.destination = "CityB";
    pd.status = "Dispatched";

    pd.updateStatus("In Transit");
    pd.trackPackage();
    pd.displayDetails();

    return 0;
}
