/*
The program will ask the user to enter the mass of an object “in kilograms” and then display the
weight of the object on the Earth, on Venus and on Mars in Newtons. The program will also display a 
message indicating that the object is heavy is if weighs over 1500 Newtons on Earth. The program 
will display a message indicating that the object is light if it weighs less than 5 Newtons on Earth.
*/
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    double user_mass, earth_newtons, venus_newtons, mars_newtons;
    string statement;
    const double EARTH = 9.807;
    const double VENUS = 8.87;
    const double MARS = 3.7;
    
    // User Data
    cout << "Enter the mass of an object in kilograms: ";
    cin >> user_mass;
    
    // Check if it is greater than 0
    if (user_mass <= 0)
    {
        cout << "mass must be greater than zero\n";
    }
    else
    {
    
    // Calculations
    earth_newtons = user_mass * EARTH;
    venus_newtons = user_mass * VENUS;
    mars_newtons = user_mass * MARS;
    
    // Conditionals
    if (earth_newtons > 1500)
    {
        statement = "\tThe object is heavy";
    }
    else if (earth_newtons < 5)
    {
        statement = "\tThe object is light";
    }

    
    // Outputs
    cout << setprecision(4) << fixed;
    cout << left << setw(6) << "Planet\t " << right << setw(14) << "Weight (N)\n" << endl;
    cout << left << setw(6) <<"Earth " << "\t" << right << setw(14) << earth_newtons << statement << endl;
    cout << left << setw(6) <<"Venus " << "\t" << right << setw(14) << venus_newtons << endl;
    cout << left << setw(6) <<"Mars  " << "\t" << right << setw(14) << mars_newtons << endl;
    }
    return 0;
}