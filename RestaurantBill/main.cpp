#include <iostream>

using namespace std;

const double tax = 6.75;
double mealCharge = 88.67;
double tip = 0.20;
double totalBill;

int main()
{
    // calculating up the meal, tax, and tip
    totalBill = (tax + mealCharge) + tip;
    tip = tip * totalBill;

    // print out each on screen
    cout << "The tax was: " << tax << endl;
    cout << "Meal charge: " << mealCharge << endl;
    cout << "Tip: " << tip << endl;
    cout << "Total charge: " << totalBill << endl;

    return 0;
}
