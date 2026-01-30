/*
a program named PrintCharsInRange.cpp that prints the characters with 
ASCII values in a particular range.
*/

#include <iostream>

using namespace std;

int main () 
{
    unsigned int user_in1, user_in2;
    char W;
    
    do
    {
        cout << "Enter the ASCII code that is the lower bound [32 through 126]: ";
        cin >> user_in1;

        if (user_in1 < 32 || user_in1 > 126)
        {
            cout << "Error, the lower bound entered is invalid.\n";
            cout << "valid range is [32 through 126].\n";
        }
    } while (user_in1 < 32 || user_in1 > 126);
    
    do
    {
        cout << "Enter the ASCII code that is the upper bound [" << user_in1 << " through 126]: ";
        cin >> user_in2;
        cout << endl;
        if (user_in2 < user_in1 || user_in2 > 126)
        {
            cout << "Error, the upper bound entered is invalid.\n";
            cout << "valid range is [" << user_in1 << " through 126].\n";
        }
    } while (user_in2 < user_in1 || user_in2 > 126);
    
    cout << "The characters with ASCII values in range " << user_in1 <<  " through " << user_in2 << " are:" << endl << endl;
    
    W = static_cast <char> (user_in1);
    int c = 0;
    for (int i = user_in1; i <= user_in2; i++)
    {
        cout << W;
        W += 1;
        c++;
        if (c % 15 == 0)
        {
            cout << endl;
            
        }
    }
    if (c % 15 != 0)
    {
        cout << endl;
    }
    return 0;
}


