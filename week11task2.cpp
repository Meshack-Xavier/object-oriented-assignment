#include <iostream>
#include <string>

class Student {
private:
    std::string studentName;
    std::string admissionNumber;
    double feeBalance;

public:
    void inputStudentData() {
        std::cout << "Enter Student Name: ";
        std::getline(std::cin >> std::ws, studentName);
        std::cout << "Enter Admission Number: ";
        std::cin >> admissionNumber;
        std::cout << "Enter Initial Fee Balance: ";
        std::cin >> feeBalance;
    }

    void makePayment(double amount) {
        if (amount > 0 && amount <= feeBalance) {
            feeBalance -= amount;
            std::cout << "Payment of $" << amount << " processed successfully.\n";
        } else if (amount > feeBalance) {
            std::cout << "Warning: Payment amount exceeds current balance. Paying remaining: $" << feeBalance << "\n";
            feeBalance = 0;
        } else {
            std::cout << "Invalid payment amount!\n";
        }
    }

    void displayStatus() const {
        std::cout << "\n--- Fee Status ---\n";
        std::cout << "Student Name : " << studentName << "\n";
        std::cout << "Admission No : " << admissionNumber << "\n";
        std::cout << "Fee Balance  : $" << feeBalance << "\n";
    }
};

int main() {
    Student s;
    s.inputStudentData();
    s.displayStatus();

    double payment;
    std::cout << "\nEnter payment amount to process: ";
    std::cin >> payment;

    s.makePayment(payment);
    s.displayStatus();

    return 0;
}