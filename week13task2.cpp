#include <iostream>
#include <fstream>

struct StudentRecord {
    char name[50];
    char regNumber[20];
    double totalMarks;
};

int main() {
    std::ifstream inFile("results.dat", std::ios::binary);

    if (!inFile) {
        std::cout << "File 'results.dat' could not be opened (or does not exist).\n";
        return 1;
    }

    StudentRecord record;
    std::cout << "--- Student Exam Results ---\n";
    
    while (inFile.read(reinterpret_cast<char*>(&record), sizeof(StudentRecord))) {
        std::cout << "Name : " << record.name 
                  << " | Marks: " << record.totalMarks << "\n";
    }

    inFile.close();
    return 0;
}