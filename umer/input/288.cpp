#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int floors;
    int totalRooms = 0;
    int totalOccupied = 0;
    
    // Get number of floors from user
    cout << "Enter the number of floors in the hotel: ";
    cin >> floors;
    
    // Loop through each floor
    for (int floor = 1; floor <= floors; floor++) {
        // Skip the 13th floor (traditional in hotels)
        if (floor == 13) {
            continue;
        }
        
        int rooms, occupied;
        
        // Get room information for current floor
        cout << "Floor " << floor << " - Enter number of rooms: ";
        cin >> rooms;
        cout << "Floor " << floor << " - Enter number of occupied rooms: ";
        cin >> occupied;
        
        // Add to totals
        totalRooms += rooms;
        totalOccupied += occupied;
    }
    
    // Calculate statistics
    int unoccupied = totalRooms - totalOccupied;
    double occupancyRate = (double)totalOccupied / totalRooms * 100;
    
    // Display results
    cout << "\nHotel Occupancy Report:" << endl;
    cout << "Total rooms: " << totalRooms << endl;
    cout << "Occupied rooms: " << totalOccupied << endl;
    cout << "Unoccupied rooms: " << unoccupied << endl;
    cout << fixed << setprecision(2);
    cout << "Occupancy rate: " << occupancyRate << "%" << endl;
    
    return 0;
}