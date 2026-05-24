#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name, scholarship;
    int marks, attendance;

    for (int i = 1; i <= 3; i++)
    {

        if (i == 1)
        {
            cout << i << ". Enter your name: ";
            getline(cin, name);
        }

        else if (i == 2)
        {
            cout << i << ". Enter your marks(0-100): ";
            cin >> marks;
        }

        else if (i == 3)
        {
            cout << i << ". Enter your attendance percentage(0-100): ";
            cin >> attendance;
        }
    }

    if (marks >= 70)
    {
        if (attendance >= 80)
        {
            scholarship = "Full scholarship";
        }
        else
        {
            scholarship = "Partial scholarship";
        }
    }
    else if (marks >= 50 && marks < 70)
    {
        if (attendance >= 85)
        {
            scholarship = "Partial scholarship";
        }
        else
        {
            scholarship = "No scholarship";
        }
    }
    else if (marks < 50)
    {
        scholarship = "No scholarship";
    }

    cout << "\nName: " << name << endl;
    cout << "Scholarship: " << scholarship << endl;

    return 0;
}