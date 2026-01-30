/*
The program will ask the user to enter the number of chili dogs, corn dogs, chips, soft drinks, and water bottles sold in order.
The program will display the dollar amount of the taxable items sold, the dollar amount of the taxes, the dollar amount of 
non-taxable items sold, and the total of taxable amount, taxes, and non-taxable amount on separate lines.
*/
#include <iomanip>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double taxable, tax_amount, non_taxable, total;
    int chili_dogs, corn_dogs, chips, soft_drinks, water_bottles;
    // Input
    cout << "Chili Dogs: ";
    cin >> chili_dogs;
    cout << "\nCorn dogs: ";
    cin >> corn_dogs;
    cout << "\nChips: ";
    cin >> chips;
    cout << "\nSoft Drinks: ";
    cin >> soft_drinks;
    cout << "\nWater Bottles: ";
    cin >> water_bottles;
    cout << endl;
    
    // Calculation
    taxable = (8 * chili_dogs) + (6 * corn_dogs) + (2 * chips) + (5 * soft_drinks);
    tax_amount = taxable * 0.0825;
    non_taxable = (4 * water_bottles);
    total = non_taxable + taxable + tax_amount;
    
    // Output/Format
    cout << setprecision(2) << fixed;
    cout << left << setw(13) << "Taxable: " << "$" << right << setw(8) << taxable << endl;
    cout << left << setw(13) << "Tax amount: " << "$" << right << setw(8) << tax_amount << endl;
    cout << left << setw(13) << "Non-taxable: " << "$" << right << setw(8) << non_taxable << endl;
    cout << left << setw(13) << "Total: " << "$" << right << setw(8) << total << endl;
}