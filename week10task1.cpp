#include <iostream>

class Payment {
public:
    void processPayment(int amount) {
        std::cout << "\n[Cash Payment Processed]\n";
        std::cout << "Total Amount: $" << amount << "\n";
    }

    void processPayment(double amount, double transactionFee) {
        double total = amount + transactionFee;
        std::cout << "\n[Card Payment Processed]\n";
        std::cout << "Base Amount : $" << amount << "\n";
        std::cout << "Card Fee    : $" << transactionFee << "\n";
        std::cout << "Final Total : $" << total << "\n";
    }

    void processPayment(double amount, double fee, double discount) {
        double total = (amount + fee) - discount;
        std::cout << "\n[Mobile Payment Processed]\n";
        std::cout << "Base Amount : $" << amount << "\n";
        std::cout << "Fee         : $" << fee << "\n";
        std::cout << "Discount    : -$" << discount << "\n";
        std::cout << "Final Total : $" << total << "\n";
    }
};

int main() {
    Payment paymentHandler;

    paymentHandler.processPayment(100);                    
    paymentHandler.processPayment(250.0, 5.0);             
    paymentHandler.processPayment(150.0, 2.50, 10.0);      

    return 0;
}