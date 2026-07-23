#include <iostream>
#include <string>
using namespace std;

string employee_name;
double basic_salary;
double overtime_hrs;
double rate_per_hour;
double overtime_pay;
double net_salary;

void getEmployeeDetails() {
    cout << "Enter employee name: ";
    cin >> employee_name;

    cout << "Enter basic salary: ";
    cin >> basic_salary;

    cout << "Enter overtime hours: ";
    cin >> overtime_hrs;

    cout << "Enter overtime rate per hour: ";
    cin >> rate_per_hour;
}

void calculateOvertimePay() {
    overtime_pay = overtime_hrs * rate_per_hour;
}

void calculateNetSalary() {
    net_salary = basic_salary + overtime_pay;
}

void displayPayslip() {
    cout << "\n===== PAYSLIP =====\n";
    cout << "Employee Name: " << employee_name << endl;
    cout << "Basic Salary: " << basic_salary << endl;
    cout << "Overtime Pay: " << overtime_pay << endl;
    cout << "Net Salary: " << net_salary << endl;
}

int main() {
    getEmployeeDetails();
    calculateOvertimePay();
    calculateNetSalary();
    displayPayslip();

    return 0;
}