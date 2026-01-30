/*
This program helps the cashier give change to the customer. It asks the user the amount
and then stores to then convert and calculate the change.
Output: get the amount that needs to be converted.
Input: the converted value.
*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double user_dollar_amount;

    // Ask the user the amount
    cout << "Enter the change amount to make in dollars: ";
    cin >> user_dollar_amount;
    cout << "\nChange Due:" << endl;
    
    int a = user_dollar_amount * 100 + 0.0001 ;
    int b = a % 100; 
    
    // Dollar amount
    int dollar = (a - b) / 100;
    
    // Quarter amount
    int d = b % 25;
    int quarter = (b - d) / 25;

    // Dime amount
    int e = d % 10;
    int dime =  (d - e) / 10;

    // Nickle amount
    int f = e % 5;
    int nickle = (e - f) / 5;

    // Penny amount
    int g = f % 1;
    int penny = (f - g) / 1;
    
    // Output statements
    cout << fixed << setprecision(16);
    cout << "\t" << static_cast<int> (dollar) << " dollars" << endl;
    cout << fixed << setprecision(16);
    cout << "\t" << static_cast<int> (quarter) << " quarters" << endl;
    cout << fixed << setprecision(16);
    cout << "\t" << static_cast<int> (dime) << " dimes" << endl;
    cout << fixed << setprecision(16);
    cout << "\t" << static_cast<int> (nickle) << " nickels" << endl;
    cout << fixed << setprecision(16);
    cout << "\t" << static_cast<int> (penny) << " pennies" << endl;
    
}