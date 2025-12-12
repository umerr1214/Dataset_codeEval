#include <iostream>
#include <string>
using namespace std;

class PackageDelivery {
protected:  // Semantic issue: should be private
    int packageID;
    string source;
    string destination;
    string status;

public:
    void updateStatus(string s) {
        status = s;
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
    p.packageID = 101; // Semantic error: protected member accessed
    p.source = "CityA";
    p.destination = "CityB";
    p.status = "In Transit";

    p.trackPackage();
    p.updateStatus("Delivered");
    p.trackPackage();
    p.displayDetails();

    return 0;
}
