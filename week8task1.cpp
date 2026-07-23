#include <iostream>
#include <string>

class BankAccount {
private:
    std::string accountHolderName;
    std::string accountNumber;
    double balance;

public:
    BankAccount(std::string name, std::string accNum, double initialBalance) {
        accountHolderName = name;
        accountNumber = accNum;
        balance = initialBalance;
        std::cout << "Account successfully created\n";
    }

    void displayAccount() const {
        std::cout << "\n--- Account Details ---\n";
        std::cout << "Account Holder: " << accountHolderName << "\n";
        std::cout << "Account Number: " << accountNumber << "\n";
        std::cout << "Balance       : $" << balance << "\n";
    }

    ~BankAccount() {
        std::cout << "Account closed successfully\n";
    }
};

int main() {
    std::string name, accNum;
    double balance;

    std::cout << "Enter Account Holder Name: ";
    std::getline(std::cin, name);
    std::cout << "Enter Account Number: ";
    std::cin >> accNum;
    std::cout << "Enter Initial Balance: ";
    std::cin >> balance;

    // Creating object dynamically/locally to observe constructor & destructor execution
    {
        BankAccount account(name, accNum, balance);
        account.displayAccount();
    } // Object goes out of scope here; destructor is called

    return 0;
}