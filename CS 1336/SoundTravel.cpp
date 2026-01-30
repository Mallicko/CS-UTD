/*
The program is a menu driven program with source file named SoundTravel.cpp that determines
how fast sound travels a specified distance through air, water or steel as selected by the user.
Input :: user's medium of choice and user's distance in feet
Output :: the travel time according to the medium and distance choosen by the user.
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    unsigned int user_med;
    double user_dis, varAir, varWater, varSteel;
    const double AIR = 1133.2, WATER = 4871.0, STEEL = 16400.0;
    
    cout << "\tTime for Sound to Travel through a Medium given Distance\n" << endl;
    cout << "1 - Air\n2 - Water\n3 - Steel\n" << endl;
    cout << "Enter the number of the medium: ";
    cin >> user_med;
    
    //Check if medium is correc
    if (user_med == 1 || user_med == 2 || user_med == 3)
    {
        cout << "\nEnter the distance to travel (in feet): ";
        cin >> user_dis;
        
        //Check the distance > 0
        if (user_dis > 0)
        {
            //Calculate according to the user_med
            cout << setprecision(4) << fixed;
            if (user_med == 1)
            {
                varAir = user_dis / AIR;
                cout << "In air it will take " << varAir << " seconds to travel " << user_dis << " feet." << endl;
            }
            else if (user_med == 2)
            {
                varWater = user_dis / WATER;
                cout << "In water it will take " << varWater << " seconds to travel " << user_dis << " feet." << endl;
            }
            else if (user_med == 3)
            {
                varSteel = user_dis / STEEL;
                cout << "In steel it will take " << varSteel << " seconds to travel " << user_dis << " feet." << endl;
            }
        }
        else
        {
            cout << "The distance must be greater than zero" << endl;
        }
    } 
    else
    {
        cout << "\nThe entry is invalid\n" << "Run the program again" << endl;
    }
}
