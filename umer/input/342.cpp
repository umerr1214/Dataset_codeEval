#include <iostream>
#include <iomanip>
using namespace std;

/**
 * Calculates the retail price based on wholesale cost and markup percentage
 * @param wholesaleCost The wholesale cost of the item
 * @param markupPercentage The markup percentage to apply
 * @return The calculated retail price
 */
double calculateRetail(double wholesaleCost, double markupPercentage) {
    return wholesaleCost * (1.0 + markupPercentage / 100.0);
}

int main() {
    double wholesaleCost, markupPercentage;
    
    // Get wholesale cost with input validation
    do {
        cout << "Enter wholesale cost: ";
        cin >> wholesaleCost;
        if (wholesaleCost < 0) {
            cout << "Error: Wholesale cost cannot be negative. Please try again." << endl;
        }
    } while (wholesaleCost < 0);
    
    // Get markup percentage with input validation
    do {
        cout << "Enter markup percentage: ";
        cin >> markupPercentage;
        if (markupPercentage < 0) {
            cout << "Error: Markup percentage cannot be negative. Please try again." << endl;
        }
    } while (markupPercentage < 0);
    
    // Calculate and display retail price
    double retailPrice = calculateRetail(wholesaleCost, markupPercentage);
    cout << fixed << setprecision(2);
    cout << "Retail price: $" << retailPrice << endl;
    
    return 0;
}