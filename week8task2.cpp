#include <iostream>
#include <string>

class RoomBooking {
private:
    std::string guestName;
    int roomNumber;
    int daysBooked;

public:
    RoomBooking(std::string name, int roomNum, int days) {
        guestName = name;
        roomNumber = roomNum;
        daysBooked = days;
        std::cout << "Room booking confirmed\n";
    }

    void displayBooking() const {
        std::cout << "\n--- Booking Details ---\n";
        std::cout << "Guest Name  : " << guestName << "\n";
        std::cout << "Room Number : " << roomNumber << "\n";
        std::cout << "Days Booked : " << daysBooked << "\n";
    }

    ~RoomBooking() {
        std::cout << "Booking ended, room released\n";
    }
};

int main() {
    std::string name;
    int room, days;

    std::cout << "Enter Guest Name: ";
    std::getline(std::cin, name);
    std::cout << "Enter Room Number: ";
    std::cin >> room;
    std::cout << "Enter Number of Days Booked: ";
    std::cin >> days;

    {
        RoomBooking booking(name, room, days);
        booking.displayBooking();
    } 

    return 0;
}