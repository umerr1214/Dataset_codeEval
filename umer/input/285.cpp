#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int floors;
    string totalRooms = 0; // Semantic error: should be int, not string
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
        
        totalRooms += rooms; // Type mismatch: adding int to string
        totalOccupied += occupied;
    }
    
    int unoccupied = totalRooms - totalOccupied; // Type mismatch: string - int
    double occupancyRate = (double)totalOccupied / totalRooms * 100; // Type mismatch
    
    cout << "\nHotel Occupancy Report:" << endl;
    cout << "Total rooms: " << totalRooms << endl;
    cout << "Occupied rooms: " << totalOccupied << endl;
    cout << "Unoccupied rooms: " << unoccupied << endl;
    cout << fixed << setprecision(2);
    cout << "Occupancy rate: " << occupancyRate << "%" << endl;
    
    return 0;
}