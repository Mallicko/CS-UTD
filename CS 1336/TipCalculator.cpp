/*
The program will develop a tip calculator incrementally, writing modular code 
contained in functions.
*/
#include <iostream>
#include <iomanip>

using namespace std;

/*
Write a function to calculate and return the dollar amount of a tip. 
The function must be named calcTipAmt. 
Input :: double sale_amount & double tip percentage
Output :: sale_amount
*/
double calcTipAmt (double sale_amount, double perc_amt)
{
    perc_amt /= 100;
    sale_amount *= perc_amt;
    return sale_amount;
}

/*
Write a function to display the menu for our tip calculator and return the 
character cooresponding to the menu item selected.
Input :: double saleAmt
Output :: tip choice of user
*/
double getMenuItem (double saleAmt)
{
    double T, F, W;
    T = calcTipAmt (saleAmt, 10);
    F = calcTipAmt (saleAmt, 15);
    W = calcTipAmt (saleAmt, 20);
    
    //Get user's letter choice.
    char user_choice;
    double userAmt;
    cout << setprecision (2) << fixed << endl;
    cout << "\t\t\tTip Calculator" << endl << endl;
    cout << "\tT - 10 percent tip of $" << T << endl;
    cout << "\tF - 15 percent tip of $" << F << endl;
    cout << "\tW - 20 percent tip of $" << W << endl;
    cout << "\tP - Custom tip percentage " << endl;
    cout << "\tA - Custom tip amount " << endl;
    
    cout << "Enter your menu choice [T, F, W, P, A]: ";
    cin >> user_choice;
    //Get user's choice
    if (user_choice == 'T' || user_choice == 't')
    {
        userAmt = T;
    }
    else if (user_choice == 'F' || user_choice == 'f')
    {
        userAmt = F;
    }
    else if (user_choice == 'W' || user_choice == 'w')
    {
        userAmt = W;
    }
    else if (user_choice == 'P' || user_choice == 'p')
    {
        cout << "Enter the tip percentage: ";
        cin >> userAmt;
        //Check tip percent
        if (userAmt <= -1)
        {
            cout << "Error, invalid percentage entered." << endl;
            cout << "Valid percentages are non-negative." << endl;
            exit(0);
        }
        userAmt = calcTipAmt (saleAmt, userAmt);
    }
    else if (user_choice == 'A' || user_choice == 'a')
    {
        cout << "Enter the tip amount: ";
        cin >> userAmt;
        //Check tip amount
        if (userAmt <= -1)
        {
            cout << "Error, invalid tip amount entered." << endl;
            cout << "Valid amounts are non-negative." << endl;
            exit(0);
        }
    } 
    //Check user menu choice
    else
    {
        cout << "\nError, invalid menu choice entered." << endl;
        exit(0);
    }
    
    return userAmt;
}

/*
Write a function to calculate and return the total sale amount (the sum of the
sale amount and the tip amount).
Input :: amount of sale & tip amount
Output :: total sale amount
*/
double calcTotalSale (double saleAmt2, double tipAmt2)
{
    saleAmt2 += tipAmt2;
    return saleAmt2;
}

int main()
{
    //To call function
    double getMenu, calcTtl;
    //To get user input
    double user_sale;
    
    cout << "Enter the amount of the sale: ";
    cin >> user_sale;
    //Check if user sale is correct.
    if (user_sale < 0)
    {
        cout << "Error, invalid sales amount entered." << endl;
        exit(0);
    }
    
    //Get user choice
    getMenu = getMenuItem (user_sale);
    if (getMenu < 0)
    {
        exit(0);
    }

    //Total Sale
    calcTtl = calcTotalSale (user_sale, getMenu);
    
    cout << setprecision (2) << fixed;
    cout << "Sales Amount: $" << user_sale << endl;
    cout << "Tip Amount: $" << getMenu << endl;
    cout << "Total Due: $" << calcTtl << endl;
    
    return 0;
}