#include <iostream>
#include <string>
using namespace std;

int main(){
    string student_name;
    double exams_marks;
    char grade;
    cout << "Enter student name :";
    getline(cin,student_name);
    cout << "Enter exam marks :";
    cin >> exams_marks;

    
    if (exams_marks >=70 && exams_marks <= 100){
        grade = 'A';
    }else if(exams_marks >= 60 && exams_marks <= 69){
        grade = 'B';
    }else if(exams_marks >= 50 && exams_marks <= 59){
        grade = 'C';
    }else if(exams_marks >= 40 && exams_marks <= 49){
        grade = 'D';
    }else{
        grade = 'E';
    }

    cout << " \nstudent name :" << student_name <<endl ;
    cout << "Exams marks :" << exams_marks << endl;
    cout << "Grade :" << grade <<endl ;
    return 0;

}