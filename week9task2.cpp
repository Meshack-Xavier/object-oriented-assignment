#include <iostream>
#include <string>

class Vehicle {
protected:
    std::string brand;
    int yearOfManufacture;

public:
    void inputVehicle() {
        std::cout << "Enter Brand: ";
        std::getline(std::cin >> std::ws, brand);
        std::cout << "Enter Year of Manufacture: ";
        std::cin >> yearOfManufacture;
    }

    void displayVehicle() const {
        std::cout << "Brand               : " << brand << "\n";
        std::cout << "Year of Manufacture: " << yearOfManufacture << "\n";
    }
};

class Car : public Vehicle {
private:
    int numberOfDoors;
    double engineCapacity; 

public:
    void inputCar() {
        inputVehicle(); 
        std::cout << "Enter Number of Doors: ";
        std::cin >> numberOfDoors;
        std::cout << "Enter Engine Capacity (L): ";
        std::cin >> engineCapacity;
    }

    void displayCar() const {
        std::cout << "\n--- Car Details ---\n";
        displayVehicle(); // Call base function
        std::cout << "Number of Doors     : " << numberOfDoors << "\n";
        std::cout << "Engine Capacity     : " << engineCapacity << " L\n";
    }
};

int main() {
    Car myCar;
    myCar.inputCar();
    myCar.displayCar();

    return 0;
}