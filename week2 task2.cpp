#include <iostream>
#include <string>
using namespace std;

int main(){
    string student_name;
    float exam_score;
    int age;

    cout << "Enter Student Name: ";
    getline(cin,student_name);
    cout << "Enter Student Age: ";
    cin >> age;
    cout << "Enter Student Exam Score: ";
    cin >> exam_score;

    if(age >= 18){
        if(exam_score >= 50){
            cout << "Admitted";
        }else{
            cout << " Not Admitted: Low Score";
        }
    }else{
        cout << "Not Admitted: Underage";
    }

    cout << "\nstudent name :" << student_name << endl;
    cout << "age :" << age << endl;
    cout << "exams score :" << exam_score << endl;
    return 0;
}