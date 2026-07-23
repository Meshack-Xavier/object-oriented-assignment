#include <iostream>
using namespace std;

int main(){
    double acc_bal,wit_amount,final_amount;
    cout << "Enter account balance :";
    cin >> acc_bal;

    cout << "Enter withdrawal amount :";
    cin >> wit_amount;

    while (wit_amount > acc_bal)
    {
        cout << "Insufficient balance. Your current balance is " << final_amount << endl;
        cout << "Enter withdrawal amount :";
        cin >> wit_amount; 
        
    }

    final_amount = acc_bal - wit_amount;
    cout << "\n--- Withdrawal Successful ---" << endl;
    cout << "Withdrawn: " << wit_amount << endl;
    cout << "Remaining Balance: " << final_amount << endl;

    return 0;

    
}
