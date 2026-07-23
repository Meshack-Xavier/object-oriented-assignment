#include <iostream>
using namespace std;

int main(){
    double revenue[7];
    double totalRevenue = 0,averageRevenue;

    for(int day = 0; day < 7; day++){
        cout << "Enter revenue for day " << day + 1 << ":";
        cin >> revenue[day];

        totalRevenue += revenue[day];
    }
    averageRevenue = totalRevenue / 7;
    cout << "\nTotal Weekly Revenue: " << totalRevenue << endl;
    cout << "Average Daily Revenue: " << averageRevenue << endl;
    return 0;

    
}