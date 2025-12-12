#include <iostream>
#include <string>
using namespace std;class PackageDelivery{public:string packageID,source,destination,status;void updateStatus(string s){status=s;cout<<"Status "<<s<<"\n";}void trackPackage(){cout<<"Package "<<packageID<<" at "<<status<<"\n";}void displayDetails(){cout<<"Package "<<packageID<<" from "<<source<<" to "<<destination<<"\n";}};int main(){PackageDelivery p;p.packageID="P001";p.source="A";p.destination="B";p.updateStatus("Shipped");p.trackPackage();p.displayDetails();return 0;}
