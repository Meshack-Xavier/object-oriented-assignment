#include <iostream>
#include <string>

using namespace std;

class Book
{
private:
    string bookTitle;
    string author;
    int numOfCopies;

public:
    void inputDetails()
    {
        cout << "Enter book title: ";
        getline(cin, bookTitle);

        cout << "Enter author name: ";
        getline(cin, author);

        cout << "Enter number of copies available: ";
        cin >> numOfCopies;
    }

    void borrowBook()
    {
        if (numOfCopies > 0)
        {
            numOfCopies--;
            cout << "\nBook borrowed successfully." << endl;
        }
        else
        {
            cout << "\nNo copies available for borrowing." << endl;
        }
    }

    void displayDetails()
    {
        cout << "\n----- Book Details -----" << endl;
        cout << "Book Title: " << bookTitle << endl;
        cout << "Author: " << author << endl;
        cout << "Copies Available: " << numOfCopies << endl;
    }
};

int main()
{
    Book book1;

    book1.inputDetails();

    cout << "\nBefore Borrowing:";
    book1.displayDetails();

    book1.borrowBook();

    cout << "\nAfter Borrowing:";
    book1.displayDetails();

    return 0;
}