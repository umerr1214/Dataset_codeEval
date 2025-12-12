#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int floors;
    int totalRooms = 0;
    int totalOccupied = 0;
    
    cout << "Enter the number of floors in the hotel: ";
    cin >> floors;
    
    for (int floor = 1; floor <= floors; floor++) {
        // Skip the 13th floor
        if (floor == 13) {
            continue;
        }
        
        int rooms, occupied;
        cout << "Floor " << floor << " - Enter number of rooms: ";
        cin >> rooms;
        cout << "Floor " << floor << " - Enter number of occupied rooms: ";
        cin >> occupied;
        
        totalRooms += rooms;
        totalOccupied += occupied;
    }
    
    int unoccupied = totalRooms - totalOccupied;
    double occupancyRate = (double)totalOccupied / totalRooms * 100;
    
    cout << "\nHotel Occupancy Report:" << endl;
    cout << "Total rooms: " << totalRooms << endl;
    cout << "Occupied rooms: " << totalOccupied << endl;
    cout << "Unoccupied rooms: " << unoccupied << endl;
    cout << fixed << setprecision(2);
    cout << "Occupancy rate: " << occupancyRate << "%" << endl;
    
    // Robustness issues:
    // - No input validation (what if user enters negative numbers?)
    // - No handling of division by zero (if totalRooms is 0)
    // - No validation that occupied <= rooms for each floor
    // - No bounds checking on input values
    // - Assumes cin will always succeed
    // - No error recovery mechanism
    
    return 0;
}