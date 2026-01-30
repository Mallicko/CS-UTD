/*
This program finds the sine, cosine, and tangent of an entered angle.
The input: the the user's angle in degrees.
The output: calculate the equivalent angle in radians. Display the angle in radians along with the sine, 
cosine and tangent of the angle.
*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const double PI = acos(-1);
    double con_deg_to_rad = PI / 180;
    double user_angle;
    
    // Get angle
    cout << "angle: ";
    cin >> user_angle;
    user_angle *= con_deg_to_rad;
    
    // Type the Trigonometric val
    cout << "\nsine(" << user_angle << ") = " << sin(user_angle) << endl;
    cout << "cosine(" << user_angle << ") = " << cos(user_angle) << endl;
    cout << "tangent(" << user_angle << ") = " << tan(user_angle) << endl;
}