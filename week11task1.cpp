#include <iostream>
#include <string>

class Employee {
private:
    std::string employeeName;
    std::string employeeID;
    double basicSalary;

public:
    void setEmployeeDetails(std::string name, std::string id, double salary) {
        employeeName = name;
        employeeID = id;
        basicSalary = salary;
    }

    
    double calculateSalary() const {
        return basicSalary + (0.10 * basicSalary); // Salary + 10% allowance
    }

    
    void displayEmployeeDetails() const {
        std::cout << "\n--- Employee Details ---\n";
        std::cout << "Employee ID   : " << employeeID << "\n";
        std::cout << "Employee Name : " << employeeName << "\n";
        std::cout << "Basic Salary  : $" << basicSalary << "\n";
        std::cout << "Net Salary    : $" << calculateSalary() << "\n";
    }
};

int main() {
    Employee emp;
    std::string name, id;
    double basicSalary;

    std::cout << "Enter Employee Name: ";
    std::getline(std::cin, name);
    std::cout << "Enter Employee ID: ";
    std::cin >> id;
    std::cout << "Enter Basic Salary: ";
    std::cin >> basicSalary;

    emp.setEmployeeDetails(name, id, basicSalary);
    emp.displayEmployeeDetails();

    return 0;
}