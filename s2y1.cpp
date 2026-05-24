#include <iostream>
using namespace std;

int main()
{
    int bookID, dueDate, returnDate;
    int overdue = 0, fineRate = 0, fineAmount = 0;

    for (int i = 1; i <= 3; i++)
    {

        if (i == 1)
        {
            cout << i << ". Enter the book ID: ";
            cin >> bookID;
        }

        else if (i == 2)
        {
            cout << i << ". Enter the due date: ";
            cin >> dueDate;
        }

        else if (i == 3)
        {
            cout << i << ". Enter the return date: ";
            cin >> returnDate;
        }
    }

    overdue = returnDate - dueDate;

    if (overdue <= 0)
    {
        fineRate = 0;
        fineAmount = 0;
    }
    else if (overdue <= 7)
    {
        fineRate = 20;
        fineAmount = overdue * fineRate;
    }
    else if (overdue <= 14)
    {
        fineRate = 50;
        fineAmount = overdue * fineRate;
    }
    else
    {
        fineRate = 100;
        fineAmount = overdue * fineRate;
    }

    cout << "\nBook ID: " << bookID << endl;
    cout << "Due Date: " << dueDate << endl;
    cout << "Return Date: " << returnDate << endl;
    cout << "Days overdue: " << overdue << endl;
    cout << "Fine rate per day: " << fineRate << endl;
    cout << "Fine amount: " << fineAmount << endl;

    return 0;
}