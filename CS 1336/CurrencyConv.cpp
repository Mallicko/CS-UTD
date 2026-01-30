/*
The program will ask the user to enter an amount to be converted in dollars.
The program will display the equivalent amount in Mexican Pesos, Euros, and Japanese Yen.
*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

//Dollars         Pesos       Euros         Yen
//     27.40        549.64       27.13     3920.39
     
int main ()
{
    double us_currency, mx_currency, eu_currency, jp_currency;
    double user_currency;
    cout << "amount: ";
    cin >> user_currency;
  
    // Covnversion
    us_currency = user_currency;
    mx_currency = user_currency * 20.06;
    eu_currency = user_currency * 0.99;
    jp_currency = user_currency * 143.08;

    // Format
    cout << setw(10) << "Dollars" << "\t" << setw(10) << "Pesos" << "\t" << setw(10) << "Euros" << "\t" << setw(10) << "Yen" << endl;
    cout << setprecision(2) << fixed;
    cout << setw(10) << us_currency << "\t" << setw(10) << mx_currency << "\t" << setw(10) << eu_currency << "\t" << setw(10) << jp_currency << endl;
}
