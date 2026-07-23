#include <iostream>
using namespace std;

int main() {
    int occupancy[5][10];
    int occupied, vacant;

    // Input room occupancy data
    for (int floor = 0; floor < 5; floor++) {
        cout << "Enter occupancy data for Floor " << floor + 1 << endl;

        for (int room = 0; room < 10; room++) {
            cout << "Room " << room + 1 << " (1 = occupied, 0 = vacant): ";
            cin >> occupancy[floor][room];

            // Validate input
            while (occupancy[floor][room] != 0 && occupancy[floor][room] != 1) {
                cout << "Invalid input. Enter 1 for occupied or 0 for vacant: ";
                cin >> occupancy[floor][room];
            }
        }

        cout << endl;
    }

    // Display occupied and vacant rooms per floor
    for (int floor = 0; floor < 5; floor++) {
        occupied = 0;
        vacant = 0;

        cout << "Floor " << floor + 1 << ": ";

        for (int room = 0; room < 10; room++) {
            cout << occupancy[floor][room] << " ";

            if (occupancy[floor][room] == 1) {
                occupied++;
            } else {
                vacant++;
            }
        }

        cout << endl;
        cout << "Occupied rooms: " << occupied << endl;
        cout << "Vacant rooms: " << vacant << endl;
        cout << endl;
    }

    return 0;
}