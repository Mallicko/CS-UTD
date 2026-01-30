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
    sale_amount *= perc_amt;
    return sale_amount;
}

/*
Write a function to display the menu for our tip calculator and return the 
character cooresponding to the menu item selected.
Input :: double saleAmt
Output :: tip choice of user
*/
doubel getMenuItem (double saleAmt)
{
    double T, F, W, userAmt;
    T = saleAmt * 0.10;
    F = saleAmt * 0.15;
    W = saleAmt * 0.20;
    
    //Get user's letter choice.
    char user_choice;
    double user_percent, user_tip_amt;
    cout << "\t\t\tTip Calculator" << endl << endl;
    cout << "\tT - 10 percent tip of " << T << endl;
    cout << "\tF - 15 percent tip of " << F << endl;
    cout << "\tW - 20 percent tip of " << W << endl;
    cout << "\tP - Custom tip percentage" << endl;
    cout << "\tA - Custom tip amount" << endl;
    
    cout << "Enter your menu choice [T, F, W, P, A]:"
    cin >> user_choice;
    //Check user's choice
    if (user_choice == 'T' || user_choice == 't')
    {
        userAmt = T;
        return 0;
    }
    else if (user_choice == 'F' || user_choice == 'f')
    {
        userAmt = F;
        return 0;
    }
    else if (user_choice == 'W' || user_choice == 'w')
    {
        userAmt = W;
        return 0;
    }
    else if (user_choice == 'P' || user_choice == 'p')
    {
        cout << "Enter the tip percentage: ";
        cin >> user_percent;
    }
    else if (user_choice == 'A' || user_choice == 'a')
    {
        cout << "Enter the tip amount: ";
        cin >> user_tip_amt;
    }
    
    return userAmt, user_percent, user_tip_amt;
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
    
}
