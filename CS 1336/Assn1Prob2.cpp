/*
This program asks the user to input the first and last initial of their names
which is then used to calculate the ascii code of the initials. Next, using the user's
inputs and adding 1 to the initals, it shows the new ascii code.
*/

#include <iostream>
using namespace std;

int main()
{
// Get first and last intial.
    char initial_f;
    char initial_l;
    cout <<"Enter your first initial: ";
    cin >> initial_f;
    cout <<"Enter your last initial: ";
    cin >> initial_l;
    cout << endl;
    
// Display first and last inital and plus 1.
    int val_1 = static_cast <int>(initial_f);
    int val_2 = static_cast <int>(initial_l);
    
    cout << initial_f << " has code " << val_1 << endl;
    int val_1_5 = static_cast <int>(initial_f + 1);
    cout << val_1 << " plus one is " << val_1_5 << " which is the character " << char(val_1_5) << endl << "\n";
    
    cout << initial_l << " has code " << val_2 << endl;
    int val_2_5 = static_cast <int>(initial_l + 1);
    cout << val_2 << " plus one is " << val_2_5 << " which is the character " << char(val_2_5) << endl;
}