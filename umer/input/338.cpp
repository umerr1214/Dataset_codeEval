#include <iostream>
using namespace std;

double calculateRetail(double wholesale, double markup) {
    return wholesale + (wholesale * markup);
}

int main() {
    double wholesale, markup;
    
    cout << "Enter wholesale cost: ";
    cin >> wholesale;
    
    cout << "Enter markup percentage: ";
    cin >> markup;
    
    double retail = calculateRetail(wholesale, markup);
    cout << "Retail price: $" << retail << endl;
    
    return 0;
}