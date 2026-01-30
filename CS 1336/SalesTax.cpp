/*
This code computes sales on the given amount of money. It will ask the user to enter the purchase value, which will then used to calculate the
state and county sales taxes then give the total amount of taxes.
*/

#include <iostream>
using namespace std;

int main()
{
    double user_amount, total_tax;
    const double state_tax = 0.06;
    const double county_tax = 0.02;

    cout << "The amount of the purchase made: ";
    cin >> user_amount;

    // Calculate the sales tax.
    double state_tax_amount = state_tax * user_amount;
    cout << "\nState sales tax = $" << state_tax_amount << endl;

    // Calculate the county tax.
    double county_tax_amount = county_tax * user_amount;
    cout << "County sales tax = $" << county_tax_amount << endl;

    // Calculate the total tax.
    total_tax = state_tax_amount + county_tax_amount;
    cout << "Total sales tax = $" << total_tax << endl;
}