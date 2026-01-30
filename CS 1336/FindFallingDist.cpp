/*
For this problem you will be creating a multi-function program with the name 
FindFallingDist.cpp to calculate the distance an object falls in a specified 
number of seconds when dropped on earth or on the moon.
*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

/*
The program will develop a tip calculator incrementally, writing modular code 
contained in functions.
Input :: none
Output :: true or false value inputed
*/
bool getSeconds (double time_us1)
{
    bool user_check;
    
    //check if the time is >= 0
    if (time_us1 < 0)
    {
        cout << "Error, the time must be at least zero." << endl;
        user_check = false;
        return 0;
    }
    else
    {
        user_check = true;
    }
    
    return user_check;
}

/*
A function that calculates and returns the distance the object would fall on 
Earth given the time of the fall in seconds as the only argument.
Input :: time from user
Output :: distance from earth
*/
double findEarthFallDist (double time_us2)
{
    double earthDist = 0.5 * 9.81 * (pow (time_us2,2));
    return earthDist;
}

/*
A function that calculates and returns the distance the object would fall on 
Earth given the time of the fall in seconds as the only argument.
Input :: time from user
Output :: distance from earth
*/
double findMoonFallDist (double time_us3)
{
    double moonDist = 0.5 * 1.625 * (pow(time_us3,2));
    return moonDist;
}

int main ()
{
    bool get_sec;
    double user_sec, eDist, mDist;
    
    //user input seconds
    cout << "Please enter the time of the fall (in seconds): ";
    cin >> user_sec;
    
    // call and check user time
    get_sec = getSeconds (user_sec);
    if (user_sec < 0)
    {
        return 0;
    }
    // earth distance
    eDist = findEarthFallDist (user_sec);
    // moon distance
    mDist = findMoonFallDist (user_sec);
    
    //outputs
    cout << setprecision (3) << fixed;
    cout << "\nThe object traveled " << eDist << " meters in "<< setprecision (1) << user_sec << " seconds on Earth." << endl;
    cout << setprecision (3) << fixed;
    cout << "The object traveled " << mDist << " meters in "<< setprecision (1) << user_sec << " seconds on the Moon." << endl;
    
    return 0;
}
