/*
The program writes that asks the user to enter a “positive whole number in the range
2 through 1000” and determines whether the entered number is prime.
Output :: user's answer from 2 - 1000.
Input :: the prime factors.
*/
#include <iostream>

using namespace std;

int main()
{
    unsigned int user_input;
    
    //User input
    cout << "Enter a positive whole number in the range 2 through 1000: ";
    cin >> user_input;
    
    //Check if the input is correct else false.
    if (user_input >= 2 && user_input <= 1000)
    {
        //Check if it is a prime else false.
        if (user_input == 2|| user_input == 3 || user_input == 5 ||
            user_input == 7|| user_input == 11|| user_input == 13||
            user_input ==17|| user_input == 19|| user_input == 23||
            user_input ==29|| user_input == 31)
            {
                cout << user_input << " is prime.\n";
            }
        else    
        {    
            cout << user_input << " is divisible by:\n";
            if (user_input % 2 == 0)
            {
                cout << "2\n";
            }
            if (user_input % 3 == 0)
            {
                cout << "3\n";
            }
            if (user_input % 5 == 0)
            {
                cout << "5\n";
            }
            if (user_input % 7 == 0)
            {
                cout << "7\n";
            }
            if (user_input % 11 == 0)
            {
                cout << "11\n";
            }
            if (user_input % 13 == 0)
            {
                cout << "13\n";
            }
            if (user_input % 17 == 0)
            {
                cout << "17\n";
            }
            if (user_input % 19 == 0)
            {
                cout << "19\n";
            }
            if (user_input % 23 == 0)
            {
                cout << "23\n";
            }
            if (user_input % 29 ==0)
            {
                cout << "29\n";
            }
            if (user_input % 31 == 0)
            {
                cout << "31\n";
            }
            
        }
        if (user_input % 2 != 0 && user_input % 3 != 0 && user_input % 5 != 0 &&
            user_input % 7 != 0 && user_input % 11 != 0&& user_input % 13 != 0&&
            user_input % 17 != 0&& user_input % 19 != 0&& user_input % 23 != 0&&
            user_input % 29 != 0&& user_input % 31 != 0)
        {
            cout << user_input << " is prime." << endl;
        }
    }
    else 
    {
        cout << "The number is not in the range 2 through 1000.";
    }
}