#include <iostream>
#include <string>
using namespace std;

class Student{
    public:
        string student_name;
        double admission_number, fee_balance;
        double updated_fee_balance,deposited_fee;

        void inputStudent(){
            cout << "Enter student name: " << endl;;
            getline(cin,student_name);
            cout << "Enter admission number: "<< endl;
            cin >> admission_number;
            cout << "Enter fee balance: "<< endl;
            cin >> fee_balance; 
            cout << "fee paid :" << endl;
            cin >> deposited_fee;
        }
        void makePayment(){
            updated_fee_balance = fee_balance - deposited_fee;
            cout << "Final fee :" << updated_fee_balance << endl;

        }
        void displayStatus(){
            cout <<"Student name :" << student_name << endl;
            cout << "admission number :" << admission_number << endl;
            cout << "fee balance :" << fee_balance << endl;
            cout << "updated fee balance :"<< updated_fee_balance << endl;

        }       

};

int main(){
    Student stud;
    stud.inputStudent();
    stud.makePayment();
    stud.displayStatus();
    return 0;
}