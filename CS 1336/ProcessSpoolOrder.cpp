/*
A multi-function program that displays the status of an order for a company that
sells spools of copper wire.
*/
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;


/*
 A function that gets the inputs data from the user and performs validation on 
 the inputs.
 Input :: n/a
 Output :: the user's input
*/
bool getOrder (int &user_st1, int &user_ch1, char &us, double &shiping_handling_ch1)
{
    
    cout << "Please enter the number of spools ordered: ";
    cin >> user_st1;
    if (user_st1 < 1)
    {
        cout << "Error, spools ordered must be 1 or more." << endl;
        return false;
    }

    cout << "Please enter the number of spools in stock: ";
    cin >> user_ch1;
    if (user_ch1 < 0)
    {
        cout << "Error, the spools in stock should be 0 or more." << endl;
        return false;
    }
    
    cout << "Is there a custom shipping and handling charge (Enter Y for Yes or N for n): ";
    cin >> us;
    if (us == 'Y' || us == 'y')
    {
        cout << "What is the shipping and handling charge? ";
        cin >> shiping_handling_ch1;
        if (shiping_handling_ch1 < 0)
        {
            cout << "Error, the charge must be at least $0.00." << endl;
            return false;
        }
    }
    else if (us == 'N' || us == 'n')
    {
        return true;
    }
    else
    {
        return false;
    }

    return true;
}

/*
Calculates and returns the difference of stools available.
Input :: spools ordered and in stock
Output :: difference
*/
int getDiff (int ord_spool, int stk_spool)
{
    int x;
    if (ord_spool >= stk_spool)
    {
        x = stk_spool;
    }
    else
    {
        x = ord_spool;
    }
    return x;
}

double calcShipping (int spools)
{
    double sh_cost = spools * 23.95;
    return sh_cost;
}
/*
Calculates and returns the shipping and handling charges for the order (using 
the return mechanism).
Input ::
Output :: 
*/
double calcShipping (int spools, double ship_hand)
{
    double sh_cost = spools * ship_hand;
    return sh_cost;
}

/*
Calculates the total charges
Input :: values
Output :: total
*/
double calcTotal (double x, double y)
{
    return x + y;
}


int main()
{
    int user_st1, user_ch1, getDiff1, diff;
    double shiping_handling_ch1, sh_cost, total;
    bool order;
    char choice;
    

     
    //calls
    order = getOrder (user_st1, user_ch1, choice, shiping_handling_ch1);
    if (order == false)
    {
        return 0;
    }
    
    getDiff1 = getDiff (user_st1, user_ch1);
    
    if (choice == 'N' || choice == 'n')
    {
        sh_cost = calcShipping (getDiff1);
    }
    else
    {
        sh_cost = calcShipping (getDiff1, shiping_handling_ch1);
    }
    
    
    if (user_ch1 > user_st1)
    {
        diff = 0;
    }
    else
    {
        diff = abs(user_ch1 - user_st1);
    }
    
    
    total = calcTotal ((getDiff1 * 155.95), sh_cost);
    
    //outputs
    cout << endl;
    cout << setprecision (2) << fixed;
    cout << "Spools ready for shipping: " << getDiff1 << endl;
    cout << "Spools on back order: " << diff << endl;
    cout << "Charges for " << getDiff1 << " spools: $" << (getDiff1 * 155.95) << endl;
    cout << "Shipping and handling for " << getDiff1 << " spools: $" << sh_cost << endl;
    cout << "Total charges (Incl. shipping & handling): $" << total << endl;
    
    return 0;
}

