#include <iostream>
#include <string>
using namespace std;

int main(){
    string student_name;
    float theory_test_marks,practical_test_marks;

    cout << "Enter student name :";
    getline(cin,student_name);
    cout << "Enter theory test marks :";
    cin  >> theory_test_marks;
    cout << "Enter practical test marks :";
    cin  >> practical_test_marks;

    double average_score;
    average_score = (theory_test_marks + practical_test_marks)/2;

    cout << "\nStudent name : " << student_name << endl;
    cout << "Theory test marks : " << theory_test_marks << endl;
    cout << "Practical test marks : " << practical_test_marks << endl;
    cout << "Average score : " << average_score << endl;

    if(average_score >= 50){
        cout << "student passed" << "\n";
    }else{
        cout << "student failed" << " \n";
    }

}