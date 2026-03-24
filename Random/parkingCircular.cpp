#include <iostream>
#include <algorithm>
using namespace std;

int calculateParkingCharge(int hours)
{
    int charge = 0;

    if (hours > 0)
    {
        int h = min(hours, 2);
        charge += h * 100;
        hours -= h;
    }

    if (hours > 0)
    {
        int h = min(hours, 3);
        charge += h * 50;
        hours -= h;
    }

    if (hours > 0)
    {
        int h = min(hours, 5);
        charge += h * 20;
        hours -= h;
    }
    // Remaining hours (if any)
    if (hours > 0)
    {
        charge += hours * 20; // same last rate
    }

    return charge;
}

int main()
{
    int hours;

    cout << "Enter Parking Hours: ";
    cin >> hours;

    int totalCharge = calculateParkingCharge(hours);

    cout << "Total Parking Charge: " << totalCharge << endl;

    return 0;
}