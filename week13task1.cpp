#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string bookTitle;

    std::cout << "Enter borrowed book title: ";
    std::getline(std::cin, bookTitle);

    std::ofstream outFile("borrowed_books.txt", std::ios::app);

    if (outFile.is_open()) {
        outFile << bookTitle << "\n";
        outFile.close();
        std::cout << "Book title successfully saved to 'borrowed_books.txt'.\n";
    } else {
        std::cerr << "Error opening file for writing!\n";
    }

    return 0;
}
