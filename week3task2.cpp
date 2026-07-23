#include <iostream>
#include <string>
using namespace std;

string customer_name;
double units_consumed;
double water_bill;
double rate_per_unit;
double final_amount_payable;
double discount;


void getCustomerDetails(){
    cout << "Enter customer name :";
    getline(cin,customer_name);

    cout << "Enter number of units :";
    cin >> units_consumed;

    cout << "Enter rate per unit :";
    cin >> rate_per_unit;
}

void calculateBill(){
    water_bill = units_consumed * rate_per_unit;
}

void applyDiscount(){
    if(units_consumed > 100){
        discount = water_bill * 0.1;
        final_amount_payable = water_bill - discount;
    }
    else{
        discount = 0;
        final_amount_payable = water_bill;
    }
}

void displayBill(){
    cout << "\n===== BILL =====\n";
    cout << "Customer Name : " << customer_name << endl;
    cout << "Number of Units : " << units_consumed << endl;
    cout << "Water bill :" << water_bill << endl;
    cout << "Discount : " << discount << endl;
    cout << "Final Amount Payable : " << final_amount_payable << endl;
}

int main(){
    getCustomerDetails();
    calculateBill();
    applyDiscount();
    displayBill();

   

}