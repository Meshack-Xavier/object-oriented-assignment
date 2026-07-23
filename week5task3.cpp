#include <iostream>
using namespace std;

int main() {
    int chain[3][5][10];
    int totalOccupied = 0;

    // Input occupancy data
    for (int branch = 0; branch < 3; branch++) {
        cout << "Enter data for Branch " << branch + 1 << endl;

        for (int floor = 0; floor < 5; floor++) {
            cout << "Floor " << floor + 1 << endl;

            for (int room = 0; room < 10; room++) {
                cout << "Room " << room + 1 << " (1 = occupied, 0 = vacant): ";
                cin >> chain[branch][floor][room];

                // Validate input
                while (chain[branch][floor][room] != 0 && chain[branch][floor][room] != 1) {
                    cout << "Invalid input. Enter 1 for occupied or 0 for vacant: ";
                    cin >> chain[branch][floor][room];
                }
            }

            cout << endl;
        }

        cout << endl;
    }

    // Count occupied rooms across all branches
    for (int branch = 0; branch < 3; branch++) {
        for (int floor = 0; floor < 5; floor++) {
            for (int room = 0; room < 10; room++) {
                if (chain[branch][floor][room] == 1) {
                    totalOccupied++;
                }
            }
        }
    }

    // Display total occupied rooms
    cout << "Total occupied rooms across all branches: " << totalOccupied << endl;

    return 0;
}