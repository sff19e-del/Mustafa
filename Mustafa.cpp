#include <iostream>
using namespace std;

/*
Full Name: Mustafa Mushtaq Abdul Rahim
Group: A2
*/

int main() {
    int consumption;
    int pricePerUnit;
    int totalBill;

    cout << "Enter electricity consumption (in kilowatts): ";
    cin >> consumption;

    if (consumption <= 100) {
        pricePerUnit = 250;
    } else if (consumption <= 300) {
        pricePerUnit = 300;
    } else {
        pricePerUnit = 350;
    }

    totalBill = consumption * pricePerUnit;

    if (totalBill > 100000) {
        cout << "High consumption – Please reduce usage" << endl;
    } else {
        cout << "Normal consumption" << endl;
    }

    cout << "Electricity consumption: " << consumption << " units" << endl;
    cout << "Price per unit: " << pricePerUnit << " IQD" << endl;
    cout << "Total bill amount: " << totalBill << " IQD" << endl;

    return 0;
