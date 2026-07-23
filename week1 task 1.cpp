#include<iostream>
#include<string>
using namespace std;
int main(){
    string customer_name;
    double quantity_purchased,price_per_phone;
    string phone_model;

    cout << "Enter customer name : ";
    cin >> customer_name;
    cout << "Enter phone model : ";
    cin >> phone_model;
    cout << "Enter quantity purchased : ";
    cin >> quantity_purchased;
    cout << "Enter price per phone : ";
    cin >> price_per_phone;

    double total_sales_amount;
    total_sales_amount = quantity_purchased * price_per_phone;

    cout << "Customer name : " << customer_name << endl;
    cout << "Phone model : " << phone_model << endl;
    cout << "Quantity purchased : " << quantity_purchased << endl;
    cout << "Price per phone : " << price_per_phone << endl;
    cout << "Total sales amount : " << total_sales_amount << endl;
}