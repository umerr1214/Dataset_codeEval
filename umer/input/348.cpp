#include <iostream>
#include <iomanip>
using namespace std;

/**
 * Function to get the rectangle's length from user input
 * @return The length of the rectangle as a double
 */
double getLength() {
    double rectangleLength;
    do {
        cout << "Enter the rectangle's length: ";
        cin >> rectangleLength;
        if (rectangleLength <= 0) {
            cout << "Error: Length must be positive. Please try again." << endl;
        }
    } while (rectangleLength <= 0);
    return rectangleLength;
}

/**
 * Function to get the rectangle's width from user input
 * @return The width of the rectangle as a double
 */
double getWidth() {
    double rectangleWidth;
    do {
        cout << "Enter the rectangle's width: ";
        cin >> rectangleWidth;
        if (rectangleWidth <= 0) {
            cout << "Error: Width must be positive. Please try again." << endl;
        }
    } while (rectangleWidth <= 0);
    return rectangleWidth;
}

/**
 * Function to calculate the area of a rectangle
 * @param length The length of the rectangle
 * @param width The width of the rectangle
 * @return The calculated area (length * width)
 */
double getArea(double length, double width) {
    return length * width;
}

/**
 * Function to display the rectangle's dimensions and area
 * @param length The length of the rectangle
 * @param width The width of the rectangle
 * @param area The calculated area of the rectangle
 */
void displayData(double length, double width, double area) {
    cout << fixed << setprecision(2);
    cout << "Rectangle Length: " << length << endl;
    cout << "Rectangle Width: " << width << endl;
    cout << "Rectangle Area: " << area << endl;
}

int main() {
    // Get rectangle dimensions from user
    double rectangleLength = getLength();
    double rectangleWidth = getWidth();
    
    // Calculate the area
    double rectangleArea = getArea(rectangleLength, rectangleWidth);
    
    // Display the results
    displayData(rectangleLength, rectangleWidth, rectangleArea);
    
    return 0;
}