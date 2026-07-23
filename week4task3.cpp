#include <iostream>
#include <string>
using namespace std;

int main(){
    const string CORRECT_USER = "Xavier";
    const string CORRECT_PASS = "1576";

    string username;
    string password;

    

    do
    {
        cout << "Enter username :";
        cin >> username;

        cout << "Enter password :";
        cin >> password;

        if(username != CORRECT_USER || password != CORRECT_PASS){
            cout << "Invalid credentials.please try again.\n";
        }
            

        } while (username != CORRECT_USER || password != CORRECT_PASS);

    cout << "\n--- Login Successful ---" << endl;
    cout << "Welcome,,Access granted " << username << endl;
    
    
}