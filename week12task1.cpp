#include <iostream>
#include <string>

class MedicalStaff {
protected:
    std::string staffName;
    std::string staffID;

public:
    MedicalStaff(std::string name, std::string id) : staffName(name), staffID(id) {}

    virtual double calculateSalary() const = 0;

    void displayDetails() const {
        std::cout << "Staff ID   : " << staffID << "\n";
        std::cout << "Staff Name : " << staffName << "\n";
    }

    virtual ~MedicalStaff() {}
};

class Doctor : public MedicalStaff {
private:
    double basicSalary;
    double allowance;

public:
    Doctor(std::string name, std::string id, double salary, double allow)
        : MedicalStaff(name, id), basicSalary(salary), allowance(allow) {}

    double calculateSalary() const override {
        return basicSalary + allowance;
    }
};

class Nurse : public MedicalStaff {
private:
    double basicSalary;
    double overtimePay;

public:
    Nurse(std::string name, std::string id, double salary, double overtime)
        : MedicalStaff(name, id), basicSalary(salary), overtimePay(overtime) {}

    double calculateSalary() const override {
        return basicSalary + overtimePay;
    }
};

int main() {
    MedicalStaff* doc = new Doctor("Dr. Alice", "DOC101", 5000.0, 1200.0);
    MedicalStaff* nurse = new Nurse("Nurse Bob", "NRS202", 3000.0, 450.0);

    std::cout << "--- Doctor Info ---\n";
    doc->displayDetails();
    std::cout << "Calculated Salary: $" << doc->calculateSalary() << "\n\n";

    std::cout << "--- Nurse Info ---\n";
    nurse->displayDetails();
    std::cout << "Calculated Salary: $" << nurse->calculateSalary() << "\n";

    delete doc;
    delete nurse;

    return 0;
}