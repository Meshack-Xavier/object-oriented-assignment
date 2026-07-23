#include <iostream>
#include <string>
using namespace std;

int main(){
    string employee_name;
    double basic_salary;
    double bonus;
    double Total_salary;

    for(int i = 1; i <= 5;i++ ){
        cout << "\nEmployee " << i << endl;

        cout << "Enter employee name :";
        getline(cin,employee_name);

        cout << "Enter basic salary :";
        cin >> basic_salary;

        cin.ignore();

        bonus = 0.05 * basic_salary;
        Total_salary = basic_salary + bonus;

        cout << "\nEmployee Name : " << employee_name << endl;
        cout << "Basic Salary : " << basic_salary << endl;
        cout << "Bonus : " << bonus << endl;
        cout << "Total Salary : " << Total_salary << endl;
        
    
    }
    return 0;
}
