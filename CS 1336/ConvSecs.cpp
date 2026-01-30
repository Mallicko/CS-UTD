/*
ConvSecs.cpp that asks the user to enter a number of seconds and converts the seconds
to days, hours, minutes and remaining seconds.
Inputs: user's seconds.
Outputs: days, hours, min, secs.
*/
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
int main()
{
    long long int user_num, remaining_val, days, hours, mins, secs;
    
    //User Input
    cout << "Enter a number of seconds (seconds must be greater than zero) : ";
    cin >> user_num;
    
    //Able to run or not
    if (user_num > 0)
    {
        if ((user_num / 86400) > 0)
        {
            days = user_num / 86400;
            cout << "Day(s): " << days << endl;
            remaining_val = user_num % 86400;
        }
        else
        {
            remaining_val = user_num;
        }
        
        if ((remaining_val / 3600) > 0)
        {
            hours = remaining_val / 3600;
            cout << "Hour(s): " << hours << endl;
            remaining_val = remaining_val % 3600;
        }
        
        if ((remaining_val / 60) > 0)
        {
            mins = remaining_val / 60;
            cout << "Minute(s): " << mins << endl;
            remaining_val = remaining_val % 60;
        }
        
        if (remaining_val > 0)
        {
            secs = remaining_val;
            cout << "Remaining second(s): " << secs << endl;
        }//20252242859
    }
}
