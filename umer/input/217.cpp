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
    
    // Calculate area and perimeter
    area = length * width;
    perimeter = 2 * (length + width);
    
    cout << "Area of rectangle: " << area << endl;
    cout << "Perimeter of rectangle: " << perimeter << endl;
    
    // Clear screen
    system("cls");
    
    // System pause
    system("pause");
    
    return 0;
    // Missing closing brace - syntax error