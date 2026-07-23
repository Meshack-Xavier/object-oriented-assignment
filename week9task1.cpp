#include <iostream>
#include <string>

class Person {
protected:
    std::string name;
    int age;

public:
    void inputPerson() {
        std::cout << "Enter Name: ";
        std::getline(std::cin >> std::ws, name);
        std::cout << "Enter Age: ";
        std::cin >> age;
    }

    void displayPerson() const {
        std::cout << "Name : " << name << "\n";
        std::cout << "Age  : " << age << "\n";
    }
};

class Student : public Person {
private:
    std::string admissionNumber;
    std::string className;

public:
    void inputStudent() {
        inputPerson(); 
        std::cout << "Enter Admission Number: ";
        std::cin >> admissionNumber;
        std::cout << "Enter Class: ";
        std::getline(std::cin >> std::ws, className);
    }

    void displayStudent() const {
        std::cout << "\n--- Student Details ---\n";
        displayPerson(); 
        std::cout << "Admission No : " << admissionNumber << "\n";
        std::cout << "Class        : " << className << "\n";
    }
};

int main() {
    Student student1;
    student1.inputStudent();
    student1.displayStudent();

    return 0;
}