/*
In this program, it approximates epsilon for differences of the form used in the change maker problem.
That is, the input multiplied by 100, subtracted from its integer representation (cast to int).
Input: user's number
Output: the minimum epsilon 
*/
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double user_input, epi_calc, con_epi;
    
    // User Input
    cout << "Enter a number of the form X.XX: ";
    cin >> user_input;
    cout << endl;
    
    // Calculation
    con_epi = user_input * 100;
    int user_input_int = round(user_input * 100);
    epi_calc = (con_epi - user_input_int) * -1;
    
    // Output
    cout << setprecision(16) << fixed; 
    cout << "Minimum epsilon: " << epi_calc;
}