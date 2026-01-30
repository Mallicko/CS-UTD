/*Suppose we have been asked to write an application for a surveyor
that converts an input compass heading to a conventional bearing.
The compass headings are measured in degrees clockwise from the North.
*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

/*
This will output error if the error statement is reached in getBearing.
*/
void outputError ()
{
    cout << "\nError invalid heading entered.\n";
}

/*
Will take four arguments in order: 1) a double that is a valid compass heading, 
2) a string that will be filled by your function with the direction to face, 3) 
a double that will be filled by your function with the angle portion of the 
bearing, and 4) a string that will be filled by your function with the direction 
to walk.
INPUT :: compass_heading, directionFace, angle, directionWalk
OUTPUT :: n/a
*/

void getBearing (double compass_heading, string &directionFace, double &angle, string &directionWalk)
{
    //storing values depending on which intervals it fits into.
    if (compass_heading >= 0 && compass_heading <= 90)
    {
        angle = compass_heading;
        directionFace = "North";
        directionWalk = "East";
    }
    else if (compass_heading > 90 && compass_heading <= 180)
    {
        directionFace = "South";
        angle = 180 - compass_heading;
        directionWalk = "East";
    }
    else if (compass_heading > 180 && compass_heading < 270)
    {
        directionFace = "South";
        angle = compass_heading - 180;
        directionWalk = "West";
    }
    else if (compass_heading >= 270 && compass_heading <= 360)
    {
        directionFace = "North";
        angle = 360 - compass_heading;
        directionWalk = "West";
    }
}

int main()
{
    double compass_heading, angle;
    string directionFace, directionWalk;

    //get valid compass heading
    cout << "Enter a compass heading [0-360 degrees]: ";
    cin >> compass_heading;
    while (compass_heading < 0 || compass_heading > 360)
    {
        outputError();
        cout << "Enter a compass heading [0-360 degrees]: ";
        cin >> compass_heading;
    }
    
    //call getBearing to get the values.
    getBearing (compass_heading, directionFace, angle, directionWalk);
    
    //output all the values.
    cout << setprecision (1) << fixed;
    cout << directionFace << " " << angle << " degrees " << directionWalk << endl;
    return 0;
}
