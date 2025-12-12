#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    double length, width;
    double area, perimeter;
    
    cout << "Enter the length of rectangle: ";
    cin >> length;
    
    cout << "Enter the width of rectangle: ";
    cin >> width;
    
    // Calculate area and perimeter - verbose approach
    double temp1, temp2;
    temp1 = length;
    temp2 = width;
    area = temp1 * temp2;
    
    double sum = length + width;
    perimeter = sum + sum;  // Less efficient than 2 * (length + width)
    
    cout << "Area of rectangle: " << area << endl;
    cout << "Perimeter of rectangle: " << perimeter << endl;
    
    // Clear screen
    system("cls");
    
    // System pause
    system("pause");
    
    return 0;
}