#include <iostream>
#include <fstream>

int main() {
    std::ifstream salesFile("sales.txt");

    if (!salesFile.is_open()) {
        std::cerr << "Error: Could not open 'sales.txt'. Make sure the file exists.\n";
        return 1;
    }

    double transactionAmount = 0.0;
    double totalSales = 0.0;

    // Read amounts line by line
    while (salesFile >> transactionAmount) {
        totalSales += transactionAmount;
    }

    // Explicitly closing the file stream
    salesFile.close();

    std::cout << "--- Daily Sales Summary ---\n";
    std::cout << "Total Sales for the Day: $" << totalSales << "\n";

    return 0;
}