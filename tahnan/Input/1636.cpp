#include <iostream>
#include <string>
using namespace std;

class PackageDelivery {
public:
    int packageID;
    string source
    string destination;
    string status;

    void updateStatus(string s) {
        status = s
    }

    void trackPackage() {
        cout << "Package " << packageID << " is " << status << endl;
    }

    void displayDetails() {
        cout << "Package " << packageID << " from " << source << " to " << destination << endl;
    }
};

int main() {
    PackageDelivery p;
    p.packageID = 101;
    p.source = "CityA";
    p.destination = "CityB";
    p.status = "In Transit";

    p.trackPackage();
    p.updateStatus("Delivered");
    p.trackPackage();
    p.displayDetails();

    return 0;
}
