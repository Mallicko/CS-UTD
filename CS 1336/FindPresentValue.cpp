/*
A  multi-function program name FindPresentVal.cpp to calculate the present value
of an investment.
*/
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

//To see if the number of years is correctly inputed.
int readYears ()
{
    int numYears;
    cout << "Enter the whole number of years of the investment: ";
    cin >> numYears;
    
    if (numYears <= 0)
    {
        cout << "Error, invalid input. The number of years must be greater than zero." << endl;
        return 0;
    }
    return numYears;
}

//The present value calculations
double presentValue (double futureValue, double interestRate, int numberYears)
{
    //The formula used needs the future value (F) and annual interest rate (r) and
    //the number of years (n) the money will sit in the account, unchanged. You will
    //be calculating the present value (P).
    
    double P = futureValue / (pow(1 + interestRate, numberYears));
    return P;
}

//Display all of the results colleceted from the calculations.
void displayResults (double P, double user_future, double annual_interest, int numberYears)
{
    cout << setprecision(2) << fixed;
    cout << "Present value: $" << P << endl;
    cout << "Future value: $" << user_future << endl;
    cout << setprecision(3);
    cout << "Annual interest rate: " << annual_interest * 100 << "%" << endl;
    cout << "Years: " << numberYears << endl;
}


//Main funtion that calls the other functions to calculate the present value.
int main()
{
    double user_future, annual_interest, prstVal;
    int yrs;
    
    cout << "Enter the future value of the investment: ";
    cin >> user_future;
    if (user_future <= 0)
    {
        cout << "Error, invalid input. The future value must be greater than zero." << endl;
        return 0;
    }
    
    cout << "Enter the annual interest rate: ";
    cin >> annual_interest;
    if (annual_interest <= 0)
    {
        cout << "Error, invalid input. The annual interest rate must be greater than zero." << endl;
        return 0;
    }
    double anlInt = annual_interest / 100;
    
    //Function calculations
    yrs = readYears();
    if (yrs <= 0)
    {
        return 0;
    }
    
    prstVal = presentValue(user_future, anlInt, yrs);
    displayResults(prstVal, user_future, anlInt, yrs);
    
    return 0;
}